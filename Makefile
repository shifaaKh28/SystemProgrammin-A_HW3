
# Compiler and linker options
FLAGS = -Wall -g

# Phony targets
.PHONY: all clean

# Default target: build StrList executable
all: StrList

# Compile StrListlib.o object file
StrListlib.o: StrList.c StrList.h
	gcc ${FLAGS} -fPIC -c StrList.c -o StrListlib.o

# Create static library StrListlib.a
StrListlib.a: StrListlib.o
	ar -rcs StrListlib.a StrListlib.o
	ranlib StrListlib.a

# Compile Main.o object file
Main.o: Main.c StrList.h
	gcc ${FLAGS} -c Main.c -o Main.o

# Link Main.o with StrListlib.a to create StrList executable
StrList: Main.o StrListlib.a
	gcc ${FLAGS} Main.o StrListlib.a -o StrList

# Cleaning
clean:
	rm -f StrList *.a *.o
