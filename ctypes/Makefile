FLAGS=-shared
COMPILE=gcc $(FLAGS)
LIBRARIES=-I/usr/include/python3.4
OUT=lib_setters.so
all:
	$(COMPILE) $(LIBRARIES) setters.c -o lib_setters.so
	$(COMPILE) basics.c -o lib_basics.so
	$(COMPILE) cross.c -o lib_cross.so
