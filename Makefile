# Name of the project
PROJ_NAME=gasOrEthan

# .cpp files
CPP_SOURCE=$(wildcard *.cpp)

# .hpp files
HPP_SOURCE=$(wildcard *.hpp)

# Object files
OBJ=$(CPP_SOURCE:.c=.o)

# Compiler
CC=g++

# Flags for compiler
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

#
# Compilation and linking
#
all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ) calcs.o
	$(CC) -o $@ $^

calcs.o: calcs.asm
	nasm -f elf64 $<

%.o: %.cpp %.hpp
	$(CC) -o $@ $< $(CC_FLAGS)

main.o: main.cpp $(HPP_SOURCE)
	$(CC) -o $@ $< $(CC_FLAGS)

clean:
	rm -rf *.o $(PROJ_NAME) *~
