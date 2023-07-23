# chise - Chip 8 SDL-based Emulator

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

## Introduction

**chise** is a fascinating emulator that brings the nostalgic charm of the Chip 8 system to life. Powered by SDL (Simple DirectMedia Layer), it provides a smooth and enjoyable experience, running classic Chip 8 ROM games with ease.

## Installation

### Arch Linux based

```bash
pacman -S sdl_gfx sdl_mixer sdl_sound sdl_image sdl_net sdl_ttf sdl12-compat
```

### Ubuntu and Debian based

```bash
apt-get install libsdl1.2-dev
```

### Compiling

To embark on your journey into the world of Chip 8, simply run the following command:

```bash
make
```

## Usage

:warning: **Warning:** Only .rom or .ch8 files are supported.

:bulb: **Tip:** Press `Esc` to exit, `R` to reload, and `P` to pause.

If you pause using `P`, you can use `Esc` to exit and `U` to resume.

To begin your adventure, load a Chip 8 ROM file using the following command:

```bash
build/emu <filename.ch8> or build/emu <filename.rom>
```

For example:

```bash
build/emu ch8/random_number_test.ch8
```

## Contributing

Embark on this exciting journey by contributing to chise! Your pull requests are warmly welcomed. If you plan to make significant changes, please open an issue first to discuss your ideas.

Please make sure to update tests as appropriate.

## License

This project is licensed under the [MIT License](https://choosealicense.com/licenses/mit/). Feel free to use and modify it, following the terms of the license. Let's keep the spirit of retro gaming alive! 🕹️