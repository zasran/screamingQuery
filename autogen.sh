#!/bin/sh

echo "Cleanup..."

rm -Rf autom4te.cache
rm -f missing install-sh mkinstalldirs libtool ltmain.sh

if [ ! -e README ] ; then
  echo 'linking README.md to README to make autotools happy'
  ln -s README.md README
fi

echo "Generating configure files... may take a while."

autoreconf --install --force && \
  echo "Preparing was successful if there was no error messages above." && \
  echo "Now type:" && \
  echo "  ./configure && make"  && \
  echo "Run './configure --help' for more information"

# eof
