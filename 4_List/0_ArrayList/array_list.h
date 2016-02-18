#ifndef __ARRAY_LIST__
#define __ARRAY_LIST__

#include <stdio.h>
#include <stdbool.h>

#define MAX_LIST_SIZE 100

typedef int element;
typedef struct {
    int data[MAX_LIST_SIZE];
    int length;
} ARRAY_LIST;

bool is_full(ARRAY_LIST *);
bool is_in_list(ARRAY_LIST*, element);
bool is_empty(ARRAY_LIST *);

void display(ARRAY_LIST *);

void add(ARRAY_LIST *, int pos, element data);
void add_last(ARRAY_LIST *, element);
void add_first(ARRAY_LIST *, element);

void delete(ARRAY_LIST *, int);
void clear(ARRAY_LIST *);
void replace(ARRAY_LIST *, int, element);


#endif // __ARRAY_LIST__
