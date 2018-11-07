TARGET = c_pack_cpp_test

cc ?= gcc
cxx ?= g++

CFLAGS = -g -O0 -Wall
CXXFLAGS = -g -O0 -Wall

OBJ = main implement shell
OBJS = $(addsuffix .o, $(OBJ))

$(TARGET) : $(OBJS)
	$(cxx) -o $@ $^

main.o : main.c 
	$(cc) $(CFLAGS) -c -o $@ $^

implement.o : implement.cpp 
	$(cxx) $(CXXFLAGS) -c -o $@ $^

shell.o : shell.c 
	$(cxx) $(CXXFLAGS) -c -o $@ $^

clean :
	rm -rf $(TARGET) $(OBJS)
