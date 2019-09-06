# st (simple terminal)

![screenshot](https://raw.githubusercontent.com/Babkock/st/master/screenshot.png)

This is my personal fork of the [Suckless simple terminal](https://st.suckless.org). The following patches were applied by hand.

## Patches

* [Alpha](https://st.suckless.org/patches/alpha/)
* [Boxdraw](https://st.suckless.org/patches/boxdraw/)
* [Fork Terminal with Same CWD](https://st.suckless.org/patches/newterm/)
* [Scrollback + Mouse](https://st.suckless.org/patches/scrollback/)
* [Open Copied URL](https://st.suckless.org/patches/open_copied_url/)
* Xresources support - automatically reads and applies on startup

The colors specified in `config.h` are only the fallback colors, they will be replaced by Xresources.

## Key bindings

* `Ctrl + Shift + C` - copy selected string
* `Ctrl + Shift + V` - paste
* `Ctrl + Shift + PageUp` - zoom in
* `Ctrl + Shift + PageDown` - zoom out
* `Ctrl + Shift + Return` - fork with same directory
* `Ctrl + Shift + U` - open copied URL in [Surf](https://github.com/Babkock/surf)

