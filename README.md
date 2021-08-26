# Boboassa's build of slock

slock - simple screen locker for X

## Requirements

In order to build slock you need the `Xlib` header files.

## Installation

Edit `config.mk` to match your local setup (slock is installed into
the `/usr/local` namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

```
make clean install
```

## Running `slock`

Simply invoke the `slock` command. To get out of it, enter your password.

## Applied patches

Patches are a way of adding functionality to the minimal standard build of slock

- Colormessage
- Foreground or Background combining:
    - Blur pixelated screen
    - dwm logo

## Configuration

The configuration of slock is done by creating a custom `config.h`
and (re)compiling the source code.

## Acknowledgments

Visit [suckless.org](https://tools.suckless.org/slock/) for more information on
slock and other suckless programs.
