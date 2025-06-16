# Keyball61 Feature Breakdown

* Keyball61 Rev2 sourced from Yushakobo in Tokyo

* Intended for right half ball side. Wired right half is expected due to battery drain of PMW3360

## Hardware
- **PixArt PMW3360 Trackball**  
  - Integrated on `SPI0`; in the DTS overlay set `rotate = <90>` so the X/Y axes matches case orientation  
  - Provides smooth pointer movement and scroll-wheel emulation in ZMK  
- **SSD1306 OLED Status Display**  
  - Hooked up to `I2C1` at address `0x3C` with the `solomon,ssd1306` driver  
