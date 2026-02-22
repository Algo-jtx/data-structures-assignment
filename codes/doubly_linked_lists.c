#include <stdio.h>
#include <stdlib.h>

/* Definition of a doubly linked list node */
struct Node {
    int data;
    struct Node* prev;   // pointer to previous node
    struct Node* next;   // pointer to next node
};

void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
}

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL)
        current = current->next;

    current->next = newNode;
    newNode->prev = current;
}

void deleteNode(struct Node** head, int value) {
    struct Node* current = *head;

    while (current != NULL && current->data != value)
        current = current->next;

    if (current == NULL)
        return;

    if (current->prev != NULL)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
}

void traverseForward(struct Node* head) {
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
