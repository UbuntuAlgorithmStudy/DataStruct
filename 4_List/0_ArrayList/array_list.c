#include "array_list.h"

bool is_full(ARRAY_LIST *list) {
    return list->length == MAX_LIST_SIZE ? true : false;
}

void add(ARRAY_LIST *list, int pos, element data) {
    int i;
    
    if ((false == is_full(list)) &&
        (pos >= 0) &&
        (pos <= list->length))
    {

        for(i = (list->length - 1); i >= pos; i--) {
            list->data[i+1] = list->data[i];
        }

        list->data[pos] = data;
        list->length++;
    } 
}

void add_last(ARRAY_LIST *list, element data) {
    add(list, list->length, data);
}

void add_first(ARRAY_LIST *list, element data) {
    add(list, 0, data);
}
