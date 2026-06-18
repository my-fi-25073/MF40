# MF40 PCB Project

[한국어 README](README.ko.md)

MF40 is my-fi's mini 40% custom keyboard PCB family. The variants share the same general design direction, but differ by horizontal width, column configuration, and bottom-row style.

This repository contains the hardware design files, QMK/VIA firmware source files, and sample plate drawing files for the MF40 PCBs.

## Type

The type indicates the PCB width and layout configuration.

* `12` / `13`: Indicates the horizontal PCB length in Cherry MX unit increments.
* `A`: Indicates a configuration where the horizontal width is fully filled with 1u columns.
* `B`: Indicates a configuration with one fewer column than the `A` configuration at the same horizontal width.
* `W`: Indicates support for a full WK-style bottom row.
* `H`: Indicates support for a 1.125u HHKB-style bottom row.

## Variants

| Variant      | Layout Configuration              | Main Layout Options                                                      |
| ------------ | --------------------------------- | ------------------------------------------------------------------------ |
| `MF40-R12AW` | 12u, 12-column, WK-style layout   | 3-split spacebar, 4.5u, 5u, or 7u spacebar                               |
| `MF40-R13AH` | 13u, 13-column, HHKB-style layout | Split or 2u Backspace, 6.25u or split spacebar                           |
| `MF40-R13AW` | 13u, 13-column, WK-style layout   | Split or 2u Backspace, 6u or split spacebar                              |
| `MF40-R13BW` | 13u, 12-column, WK-style layout   | ANSI/ISO/split/BAE Enter, left/right Shift options, 6u or split spacebar |

## Repository Structure

```text
KicadFiles/       KiCad schematic and PCB files
FirmwareFiles/    QMK/VIA firmware source folders
PlateFiles/       DXF plate drawing files
OtherFiles/       Other project files
```

## Firmware

Each firmware folder under `FirmwareFiles/` corresponds to one PCB variant. To compile the firmware, copy the relevant folder into QMK's `keyboards/` directory.

The firmware supports VIA and custom LED control.

## Hardware

Each PCB variant is managed as an independent KiCad project under `KicadFiles/`. If production outputs are available, they are placed in the `production/` directory of each variant.

## License

See [LICENSE](LICENSE).
