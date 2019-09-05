# st (simple terminal)

![screenshot](https://raw.githubusercontent.com/Babkock/st/master/screenshot.png)

This is my personal fork of the [Suckless simple terminal](https://st.suckless.org). It has the following patches applied:

* [Alpha](https://st.suckless.org/patches/alpha/)
* [Boxdraw](https://st.suckless.org/patches/boxdraw/)
* [Fork Terminal with Same CWD](https://st.suckless.org/patches/newterm/)
* [Scrollback + Mouse](https://st.suckless.org/patches/scrollback/)
* [Open Copied URL](https://st.suckless.org/patches/open_copied_url/)
* Xresources support - automatically reads and applies on startup

The colors specified in `config.h` are only the fallback colors, they will be replaced by Xresources.

Quick shortcuts that I've defined in `config.h`

* `Ctrl + Shift + C` - copy selected string
* `Ctrl + Shift + V` - paste
* `Ctrl + Shift + U` - open copied URL in surf

