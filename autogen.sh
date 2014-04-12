#!/bin/sh

echo "Cleanup..."

rm -Rf autom4te.cache
rm -f missing install-sh mkinstalldirs libtool ltmain.sh

echo "Generating configure files... may take a while."

autoreconf --install --force && \
  echo "Preparing was successful if there was no error messages above." && \
  echo "Now type:" && \
  echo "  ./configure && make"  && \
  echo "Run './configure --help' for more information"

# eof
