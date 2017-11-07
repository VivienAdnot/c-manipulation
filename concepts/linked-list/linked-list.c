#include <stdio.h>

typedef struct Element Element;
struct Element
{
    int data;
    Element *next;
};

typedef struct LinkedList LinkedList;
struct LinkedList {
    Element *first;
};

LinkedList *init() {
    LinkedList *list = malloc(sizeof(*list));
    Element *element = malloc(sizeof(*element));

    if (list == NULL || element == NULL) {
        exit(EXIT_FAILURE);
    }

    element->data = 0;
    element->next = NULL;

    list->first = element;

    return list;
}

void display(LinkedList *list) {
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *current = list->first;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
