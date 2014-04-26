Screaming Query
===============

Lean mean screaming query engine (spell checker keeps suggesting streaming but what does the spell chequer know).

TODO:
  * add simple line reader (reads numbers or strings from a stream, one entry per line)
  * add simple aggregators like sum, average, maybe histogram for strings (plain text output)

Maintainer build on Ubuntu
==========================

  * install software needed for build:
    * sudo apt-get install automake autoconf autotools-dev autoconf-archive
  * build:
    * autogen.sh: generates configure
    * configure: generates Makefiles (and some other files)
    * make: builds the project (./src/scry is the main program)
    * make maintainer-clean: cleans almost everything that was autogenerated
  * update ChangeLog
    * git log --pretty=format:'%h %ad %s | %an' --date=short > ChangeLog
