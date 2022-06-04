# st (simple terminal)

[![Build Status](https://travis-ci.org/Babkock/st.svg?branch=master)](https://travis-ci.org/Babkock/st) [![pipeline status](https://gitlab.com/tbsuckless/st/badges/master/pipeline.svg)](https://gitlab.com/tbsuckless/st/-/commits/master)

![screenshot](https://gitlab.com/tbsuckless/st/-/raw/master/screenshot.png)

This is my personal fork of the [Suckless simple terminal](https://st.suckless.org). The following patches were applied by hand.

## Patches

* [Alpha](https://st.suckless.org/patches/alpha/)
* [Boxdraw](https://st.suckless.org/patches/boxdraw/)
* [Gradient](https://st.suckless.org/patches/gradient/)
* [Scrollback + Mouse](https://st.suckless.org/patches/scrollback/)
* [Selection colors](https://st.suckless.org/patches/selectioncolors/)
* Xresources support

The colors specified in `config.h` are only the fallback colors, they will be replaced by Xresources. Use the standard names of `color0`, `color1`, etc.

## Key bindings

* `Ctrl + Shift + C` - copy selected string
* `Ctrl + Shift + V` - paste
* `Ctrl + Shift + PageUp` - zoom in
* `Ctrl + Shift + PageDown` - zoom out
* `Shift + Scroll Up` - scroll back up in the buffer
* `Shift + Scroll Down` - scroll down in the buffer
