cc = gcc
target = exefile
objects = main.o Calculate.o Read.o

$(target): $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Header.h

.PHONY : clean
clean :
	rm $(target) $(objects)
