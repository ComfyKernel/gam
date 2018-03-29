CC=g++
CFLAGS=-I../include/ -fPIC
OFLAGS=-lSDL2 -lGLEW -lGL -shared

FILES=$(shell find -name "*.cpp" -type f)
OBJS =$(patsubst %.cpp,%.o, $(FILES))

LIB=libgamvid.so

all: $(OBJS) $(LIB)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB):
	@if [ -f ../../bin/$(LIB) ]; \
	then \
	echo "Removing previously created library"; \
	rm ../../bin/$(LIB); \
	fi;

	$(CC) $(OFLAGS) $(CFLAGS) $(OBJS) -o ../../bin/$(LIB)
