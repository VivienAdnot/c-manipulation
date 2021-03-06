#include "linked-list.c"

LinkedList *init();
void display(LinkedList *list);
void append(LinkedList *list, int elementValue);
void prepend(LinkedList *list, int elementValue);
void insertAfter(LinkedList *list, int elementValue, int target);
void deleteFirstOccurence(LinkedList *list, int elementValue);
void clear(LinkedList *list);
int length(LinkedList *list);
