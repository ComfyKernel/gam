P_O   = ./
P_BIN = $(P_O)/bin
P_SRC = $(P_O)/src

all: lib test runtests

runtests:
	make -C $(P_BIN) runtests

test:
	make -C $(P_SRC) test

lib:
	make -C $(P_SRC) lib

libvid:
	make -C $(P_SRC) libvid

clean:
	make -C $(P_BIN) clean
	make -C $(P_SRC) clean
