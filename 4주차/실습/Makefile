cc=g++

target=exefile
objects=main.o LinkedList.o prnMenu.o Stack.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

$(target) : prnMenu.h

.PHONY : clean
clean :
	rm $(target) $(objects)
