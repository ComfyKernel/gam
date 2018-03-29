CC=g++
CFLAGS=-I../include/ -fPIC

FILES=$(shell find -name "*.cpp" -type f)
OBJS =$(patsubst %.cpp,%.o, $(FILES))

LIB=libgam.so

all: $(OBJS) $(LIB)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB):
	@if [ -f ../../bin/$(LIB) ]; \
	then \
	echo "Removing previously created library"; \
	rm ../../bin/$(LIB); \
	fi;

	$(CC) -shared $(CFLAGS) $(OBJS) -o ../../bin/$(LIB)
