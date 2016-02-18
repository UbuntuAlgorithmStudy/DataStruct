#include <stdio.h>
#include "array_list.h"



int main(void) {

    ARRAY_LIST id_list;
    id_list.length = 0;

    add_last(&id_list, 22);
    add_last(&id_list, 254);

    add_first(&id_list, 11);
    
    printf("%d\n", id_list.data[0]);
    printf("%d\n", id_list.data[1]);
    printf("%d\n", id_list.data[2]);
    return 0;
}
