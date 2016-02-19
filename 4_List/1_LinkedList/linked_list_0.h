#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#ifdef __APPLE__
#include <malloc/malloc.h>
#else
#include <malloc.h>
#endif  /* __APPLE__ */

#include <stdbool.h>


typedef int element;
typedef struct ListNode{
    char data;
    struct ListNode *next;
} ListNode;

void insert(ListNode *, int, element);

uint32_t get_length(ListNode *);

void add_last(ListNode *, element);
void add_first(ListNode *, element);



#endif  /* __LINKED_LIST_H__ */

