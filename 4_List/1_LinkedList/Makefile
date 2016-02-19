CC = gcc -g
OUTPUT = ll
OBJECTS = linked_list_0.o main.o

all: BEGIN $(OBJECTS)
	@$(CC) -g -o $(OUTPUT) $(OBJECTS)
	@echo Compilation is done.

BEGIN:
	@echo Compilation will start soon..

main.o: main.c
	@$(CC) -c main.c

linked_list_0.o: linked_list_0.c
	@$(CC) -c linked_list_0.c

clean :
	@rm -rf $(OBJECTS)






