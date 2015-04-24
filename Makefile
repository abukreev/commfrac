MAKE_LIB=Makefile.lib
MAKE_TEST=Makefile.test

all:
	make -f $(MAKE_LIB)
	make -f $(MAKE_TEST)
    
clean:
	make -f $(MAKE_LIB) clean
	make -f $(MAKE_TEST) clean
