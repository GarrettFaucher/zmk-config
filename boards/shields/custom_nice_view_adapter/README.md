# custom_nice_view_adapter

This shield is used as an adapter between the nice!view and existing shields/boards that expose an I2C OLED header.

To use this shield, you should add this shield to your list of shields _before_ `custom_nice_view`.

The nice!view will use the SDA/SCL pins of the OLED, and then the adapter expects a final
pin to be "bodged" from your microcontroller to the nice!view CS pin.

## CS pin

The only board actually built from this repo is `nice_nano_v2`, and
`boards/nice_nano_v2.overlay` uses:

```
cs-gpios = <&pro_micro 0 GPIO_ACTIVE_HIGH>;
```

That is `&pro_micro 0`, or "D0", not the upstream default. The other seven overlays in
`boards/` (`nice_nano`, `nrfmicro_11`, `nrfmicro_11_flipped`, `nrfmicro_13`,
`bluemicro840_v1`, `mikoto_520`, `puchi_ble_v1`) are inherited from upstream, still use
`&pro_micro 1` ("D1"), and are not referenced by `build.yaml`.

If you can't use the configured pin, override the `cs-gpios` for the `&nice_view_spi` bus
(in your keymap/overlay for example) or define your own `&nice_view_spi` bus without using
this adapter.

## Building

Builds normally run through GitHub Actions from `build.yaml`, or locally with the
`zmkb <artifact-name>` helper (for example `zmkb sofle_peripheral_right`). The equivalent
direct west command is:

```
west build -b nice_nano_v2 -- -DSHIELD="sofle_left custom_nice_view_adapter custom_nice_view"
```
