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

LinkedList *init(int elementValue) {
    LinkedList *list = malloc(sizeof(*list));
    Element *element = malloc(sizeof(*element));

    if (list == NULL || element == NULL) {
        exit(EXIT_FAILURE);
    }

    element->data = elementValue;
    element->next = NULL;

    list->first = element;

    return list;
}

void append(LinkedList *list, int elementValue) {
    Element *current = list->first;

    Element *newElement = malloc(sizeof(*newElement));
    newElement->data = elementValue;
    newElement->next = NULL;

    if (current == NULL) {
        current = newElement;
    }

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newElement;
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
