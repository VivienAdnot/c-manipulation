#include "linked-list.h"

void test()
{
    LinkedList *list = init(2);
    display(list);
    append(list, 4);
    display(list);
    delete(list, 2);
    display(list);
}
