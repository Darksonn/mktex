# mktex

This is a very simple tool which contains four latex templates, and the capabilities to simply write them to a file.

## Usage

    mktex [flags] outputfile

Prefix any flag with no to disable it
If an option is changed by several flags, the last flag is in effect

### List of flags:
 * [no]head     Include code for a header in the tex document   on by default
 * [no]math     Include mathematical packages                   off by default


## Arch package
A PKGBUILD is supplied in the repository. Run `makepkg -s` to build the package, and install it with pacman.
