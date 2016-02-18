CC = gcc -g
OUTPUT = al
OBJECTS = main.o array_list.o

all: BEGIN $(OBJECTS)
	@$(CC) -g -o $(OUTPUT) $(OBJECTS)
	@echo Compilation is done.

BEGIN:
	@echo Compilation will start soon..

main.o: main.c
	@$(CC) -c main.c

array_list.o: array_list.c
	@$(CC) -c array_list.c

clean :
	@rm -rf $(OBJECTS)






