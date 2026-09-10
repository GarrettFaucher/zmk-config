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

Idle saves nothing here: only backlight, RGB, battery reporting, and display blanking react
to `ZMK_ACTIVITY_IDLE`. With deep sleep unreachable, both halves run at active current from
boot until flat.

What bounds the draw is `poll-period-ms = <5>` on `kscan0`. The binding default of `1` is a
permanent 1 kHz rescan of all 81 cells that nothing suspends; this sets only the idle rate,
since pressed or debouncing cells still scan at `debounce-scan-period-ms` (1 ms).
