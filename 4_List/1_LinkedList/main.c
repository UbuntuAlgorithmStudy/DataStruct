#include <stdio.h>

#ifdef __APPLE__
#include <malloc/malloc.h>
#else
#include <malloc.h>
#endif  /* __APPLE__ */

#include "linked_list_0.h"

int main()
{
    ListNode *list = NULL;
    list->next = NULL;


    return 0;
}
