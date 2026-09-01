# Keyball61 Feature Breakdown

* Keyball61 Rev2 sourced from Yushakobo in Tokyo

* Intended for right half ball side. Wired right half is expected due to battery drain of PMW3360

## Hardware
- **PixArt PMW3360 Trackball**
  - On `SPI0` in `keyball61_right.overlay` (`compatible = "pixart,pmw3360"`, CS on
    `&gpio0 9`, `spi-max-frequency = <2000000>`)
  - `cpi = <600>` and `rotate-90;` so the X/Y axes match case orientation
  - `mouse_listener` applies `INPUT_TRANSFORM_Y_INVERT`, and layer 3 maps XY to scroll
- **SSD1306 OLED Status Display**
  - On `I2C1` at address `0x3c` with the `solomon,ssd1306fb` driver (see `keyball61.dtsi`)
  - 128x32, `multiplex-ratio = <31>`, `segment-remap`, `com-invdir`, `inversion-on`

## Split roles
- **Right = central.** `Kconfig.defconfig` sets `ZMK_SPLIT_ROLE_CENTRAL` default `y` only
  inside `if SHIELD_KEYBALL61_RIGHT`, so the trackball half owns the USB/BLE connection.
- **Left = peripheral.**

## Power and sleep
Deep sleep (`CONFIG_ZMK_SLEEP`) is disabled on **both** halves (`CONFIG_ZMK_SLEEP=n` in
`keyball61_left.conf` and `keyball61_right.conf`).

Reason: the key matrix in `keyball61.dtsi` is `zmk,kscan-gpio-charlieplex` with no
`interrupt-gpios`. Without that property ZMK's charlieplex driver runs in polling mode and
never arms a GPIO wake interrupt, so the `wakeup-source` property on `kscan0` does nothing
for it. After entering deep sleep a half would only wake from USB power or the reset
button, i.e. a keypress could not bring it back.

Adding `interrupt-gpios` would require a dedicated sense line that the Keyball PCB does not
have, so it is not an option here.

Instead both halves rely on idle:

```
CONFIG_ZMK_IDLE_TIMEOUT=28800000
```

That is 8 hours (8 * 60 * 60 * 1000 ms) before dropping into the low-power idle state,
which a keypress does wake from.
