# custom_nice_view (nice!view fork)

Upstream ZMK's `nice_view` shield (a low-power, high refresh rate replacement for the
usual I2C OLED) with a custom peripheral status screen.

## What is different from upstream

On a peripheral half the status screen draws one of three images, picked randomly at
boot in `widgets/peripheral_status.c` (`sys_rand32_get() % 3` selecting `winston`,
`cygnus`, or `pip`) alongside the battery and connection indicators. The central half uses upstream's
`widgets/status.c` and shows no art.

`CMakeLists.txt` splits the two builds:

* `CONFIG_ZMK_SPLIT_ROLE_CENTRAL=n` compiles `widgets/art.c` + `widgets/peripheral_status.c`
* `CONFIG_ZMK_SPLIT_ROLE_CENTRAL=y` (or a non-split build) compiles `widgets/status.c`

## Wiring / build

This shield requires an `&nice_view_spi` labeled SPI bus with _at least_ MOSI, SCK, and CS
pins defined. In this repo that bus comes from `custom_nice_view_adapter`, so `build.yaml`
always lists `custom_nice_view_adapter custom_nice_view` (in that order) after the keyboard
shield, on `nice_nano_v2`:

```yaml
  - board: nice_nano_v2
    shield: sofle_right custom_nice_view_adapter custom_nice_view
    cmake-args: -DCONFIG_ZMK_SPLIT_ROLE_CENTRAL=n
    artifact-name: sofle_peripheral_right
```

## Art pipeline

Source bitmaps live in `assets/art/` and map to the arrays in `widgets/art.c`:

| BMP | array | `lv_img_dsc_t` |
| --- | --- | --- |
| `WUB_ART.bmp` | `winston_map` | `winston` |
| `CIG_ART.bmp` | `cygnus_map` | `cygnus` |
| `PIP_ART.bmp` | `pip_map` | `pip` |

Each image is 140x68, `LV_IMG_CF_INDEXED_1BIT`, `data_size = 1232`.

To regenerate one:

1. Edit `bmp_path` near the bottom of `assets/art/nano_art_converter.py` (it is hardcoded,
   there is no CLI argument) to point at the BMP.
2. Run the script. It prints an ASCII preview and then the C array.
3. Paste the printed bytes into the matching `*_map[]` in `widgets/art.c`.

The script emits **only** the 1232 pixel bytes. It does **not** emit the 8-byte palette
header that each array in `art.c` starts with (the two 4-byte index colors wrapped in the
`#if CONFIG_NICE_VIEW_WIDGET_INVERTED` block), so keep those eight bytes in place and
replace only the pixel data below them.

## Disable custom widget

The nice!view shield includes a custom vertical widget. To use the built-in ZMK one, add the following item to your `.conf` file:

```
CONFIG_ZMK_DISPLAY_STATUS_SCREEN_BUILT_IN=y
CONFIG_ZMK_LV_FONT_DEFAULT_SMALL_MONTSERRAT_26=y
CONFIG_LV_FONT_DEFAULT_MONTSERRAT_26=y
```
