CC = g++
target = exefile
objects = main.o Str.o

$(target) : $(objects)
	$(CC) -o $(target) $(objects)
	
$(objects) : Str.h

.PHONY: clean
clean:
	rm $(target) $(objects)
