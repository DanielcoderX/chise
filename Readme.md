# chise
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)

chip 8 SDL-based Emulator

## Installation
### Arch Linux based
```bash
pacman -S sdl_gfx sdl_mixer sdl_sound sdl_image sdl_net sdl_ttf sdl12-compat
```
### Ubuntu  and Debian based
```bash
apt-get install libsdl1.2-dev
```
### Compiling
```bash
make
```
## Usage
:warning: **Warning:** Just .rom or .ch8 supported

:bulb: **Tip:** Esc for Exit - R for Reload - P for Pause

**When using P:**

use Esc for Exit and U for Resume
```bash
build/emu <filename.ch8> or build/emu <filename.rom>
Example:
       build/emu ch8/random_number_test.ch8
```
## Issues
=> A little memory usage :)
## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[MIT](https://choosealicense.com/licenses/mit/)
