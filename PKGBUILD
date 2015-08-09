# Maintainer: Kristoffer Ryhl-Johansen <kristoffer@ryhl.dk>

pkgname=mktex
pkgrel=1
pkgver=20150809
pkgdesc="Creates tex files from a template"
url="https://github.com/Darksonn/mktex"
provides=('mktex')
arch=('x86_64' 'i686')
license=('UNLICENSE')
depends=('gcc-libs')
makedepends=()
backup=()
install=''
source=('./Makefile' './mktex.c')
md5sums=('291468d75c2cde1f37636a4c16bc3b0d' '10807a454c30bbf327157e245c52e1e7')

pkgver() {
  date +%G%m%d
}

package() {
  make
  install -Dm 0755 mktex "${pkgdir}/usr/bin/mktex"
}

# vim:set ts=2 sw=2 et:
