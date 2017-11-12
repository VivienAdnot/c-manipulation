#include "linked-list.h"

void test()
{
    LinkedList *list = init(2);
    prepend(list, 4);
    append(list, 6);
    insertAfter(list, 3, 4);
    deleteFirstOccurence(list, 2);
    display(list);
    printf("%d\n", list->length);
}
