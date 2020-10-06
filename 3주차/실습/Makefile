cc = g++
target = exefile
objects = main.o RangeArray.o Array.o

$(target): $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Array.h RangeArray.h

.PHONY : clean
clean :
	rm $(target) $(objects)
