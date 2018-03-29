all:
	@echo "Please specify command"
	@echo "(make runtests / make clean)"

runtests:
	LD_LIBRARY_PATH="./" ./gamtest.out

clean:
	rm $(wildcard *.out) $(wildcard *.a)   \
	   $(wildcard *.lib) $(wildcard *.dll) \
	   $(wildcard *.so) $(wildcard *.o)
