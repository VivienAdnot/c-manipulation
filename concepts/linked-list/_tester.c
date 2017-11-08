#include "linked-list.h"

void test()
{
    LinkedList *list = init(2);
    prepend(list, 4);
    clear(list);
    display(list);
}
