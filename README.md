To run the OS:
 1. In the terminal, type `make toolchain` inside the Micro-OS master directory.
 2. In the terminal, type `bash run.sh` inside the Micro-OS master directory. This will compile and run the OS in qemu.

Before compiling, run the following command:

    Debian/Ubuntu: $ sudo apt install build-essential bison flex libgmp3-dev libmpc-dev libmpfr-dev texinfo \
                   nasm mtools qemu-system-x86

    Fedora:        $ sudo dnf install gcc gcc-c++ make bison flex gmp-devel libmpc-devel mpfr-devel texinfo \
                   nasm mtools qemu-system-x86