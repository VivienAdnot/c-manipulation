#include "linked-list.h"

void test()
{
    LinkedList *list = init(2);
    prepend(list, 4);
    append(list, 6);
    delete(list, 2);
    display(list);
}
