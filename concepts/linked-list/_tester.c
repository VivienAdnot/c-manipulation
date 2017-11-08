#include "linked-list.h"

void test()
{
    // LinkedList *list = init(4);
    // display(list);
    //
    // append(list, 2);
    // append(list, 3);
    // display(list);
    //
    // delete(list, 2);
    // display(list);

    // LinkedList *list = init(4);
    // append(list, 2);
    // display(list);
    //
    // delete(list, 4);
    // display(list);

    LinkedList *list = init(2);
    append(list, 4);
    display(list);

    delete(list, 4);
    display(list);
}
