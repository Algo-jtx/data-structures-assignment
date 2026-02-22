#include <stdio.h>
#include <stdlib.h>

/* Definition of a circular linked list node */
struct Node {
    int data;
    struct Node* next;
};

/*insert at beginning*/
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != *head)
        current = current->next;

    newNode->next = *head;
    current->next = newNode;
    *head = newNode;
}

/*insert at end*/
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != *head)
        current = current->next;

    current->next = newNode;
    newNode->next = *head;
}

/*transverse circular lists*/
void traverse(struct Node* head) {
    if (head == NULL)
        return;

    struct Node* current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);

    printf("(back to head)\n");
}
