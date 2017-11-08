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
    int length;
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
    list->length = 1;

    return list;
}

void prepend(LinkedList *list, int elementValue) {
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    if (list->first == NULL) {
        Element *newElement = malloc(sizeof(*newElement));
        newElement->data = elementValue;
        newElement->next = NULL;

        list->first = newElement;
    }
    else {
        Element *newElement = malloc(sizeof(*newElement));
        newElement->data = elementValue;
        newElement->next = list->first;

        list->first = newElement;
    }

    list->length++;
}

void append(LinkedList *list, int elementValue) {
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *newElement = malloc(sizeof(*newElement));
    newElement->data = elementValue;
    newElement->next = NULL;

    Element *current = list->first;

    if (current == NULL) {
        current = newElement;
        list->length++;
        return;
    }

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newElement;
    list->length++;
}

void insertAfter(LinkedList *list, int elementValue, int target) {
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    if (list->first == NULL) {
        exit(EXIT_FAILURE);
    }

    if (list->first->data == target) {
        Element *newElement = malloc(sizeof(*newElement));
        newElement->data = elementValue;
        newElement->next = list->first->next;

        list->first->next = newElement;
        list->length++;
        return;
    }

    Element *current = list->first;

    while (current->next != NULL) {
        current = current->next;

        if (current->data == target) {
            Element *newElement = malloc(sizeof(*newElement));
            newElement->data = elementValue;
            newElement->next = current->next;

            current->next = newElement;
            list->length++;
            return;
        }
    }
}

void deleteFirstOccurence(LinkedList *list, int elementValue) {
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    if (list->first == NULL) {
        exit(EXIT_FAILURE);
    }

    if (list->first->data == elementValue) {
        if (list->first->next != NULL) {
            Element* toBeDeleted = list->first;
            list->first = list->first->next;
            free(toBeDeleted);
        } else {
            list->first = NULL;
        }
        list->length--;
        return;
    }

    Element *current = list->first;

    while (current->next != NULL) {
        if (current->next->data == elementValue) {
            Element* toBeDeleted = current->next;
            current->next = current->next->next;
            free(toBeDeleted);
            list->length--;
            return;
        }
        current = current->next;
    }
}

void display(LinkedList *list) {
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *current = list->first;

    while (current != NULL) {
        printf("[%d : %d | %d] -> ", current, current->data, current->next);
        current = current->next;
    }
    printf("NULL\n");
}

void clear(LinkedList *list) {
    if (list == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *current = list->first;

    while (current != NULL) {
        Element* toBeDeleted = current;
        current = current->next;
        free(toBeDeleted);
        list->length--;
    }
    list->first = NULL;
}
