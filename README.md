## CRAFT: Configurable Runtime Analysis for Floating-point Tuning

Mike Lam, James Madison University


**WARNING: THIS IS RESEARCH SOFTWARE!**

Building and using this project currently requires some experience in systems
development and tool infrastructure. This file includes some basic installation
and compilation instructions, but they may require some manual modification on
your specific platform.  Contact the author if you encounter issues.

Currently this project only works on x86\_64 Linux. The environment variable
PLATFORM needs to be set to "`x86_64-unknown-linux2.4`".


Dependencies:

* DyninstAPI (Tested version: [9.1.0](https://github.com/dyninst/dyninst))

  Dyninst must be compiled and accessible to the linker. The environment variable
  `DYNINST_ROOT` should point to the location it is installed.

* XED2 Library (Tested version: from
  [Pin 2.14-71313](http://software.intel.com/en-us/articles/pintool-downloads))

  Set the `XED_KIT` variable in the Makefile appropriately after you have
  downloaded Pin. There is no need to compile Pin or XED from source. Note that
  CRAFT does not use Pin directly, only XED.

* Boost headers (Tested version:
  [1.53.0](http://sourceforge.net/projects/boost/files/boost/1.53.0/))

  The default Boost headers on your system may work. If you get Boost-related
  compile errors, download the headers from the URL above and use the
  `LOCAL_INC_DIRS` variable in the Makefile to point the compiler to it (using
  `-I`).


To build CRAFT, use the `make` command in the root directory. You will need a
reasonably recent (4.x) version of gcc. The build has been tested with gcc
version 4.6.2.

There is currently no installation routine. You will need to add the `$PLATFORM`
folder created by the build process to `PATH` and `LD_LIBRARY_PATH`. I recommend
writing a shell script to set `PLATFORM`, `DYNINST_ROOT`, `PATH`, and `LD_LIBRARY_PATH`.

For replacement analysis to work, the current directory ("`.`") also needs to be
in `LD_LIBRARY_PATH` so that the runtime linker can find the rewritten shared
libraries.

To test the build, execute the `./run_tests` command in the testsuite folder.

To sanity-check a non-testsuite executable, try one of the following commands:

    fpinst --cinst <binary>
    fpinst --dcancel <binary>
    fpinst --svinp double <binary>

To use the automatic search script, you will need Ruby 2.0 or later.

To build and use the GUI, you will need Java 1.6 or later.


CRAFT is free software: you can redistribute it and/or modify it under the terms
of the GNU Lesser General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along
with this program.  If not, see <http://www.gnu.org/licenses/>.

For more license details, please read LICENSE in the main project directory.

