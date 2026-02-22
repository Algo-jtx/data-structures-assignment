#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; //value storage
    struct Node*next; //pointer to next node
};
/*initializing head*/
struct Node* head = NULL;

void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void insertAtPosition(struct Node** head, int value, int position) {
    if (position == 1) {
        insertAtBeginning(head, value);
        return;
    }

    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* current = *head;
    for (int i = 1; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Position out of range\n");
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

/*deleting node by value*/
void deleteNode(struct Node** head, int value) {
    struct Node* current = *head;
    struct Node* previous = NULL;

    if (current != NULL && current->data == value) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Value not found\n");
        return;
    }

    previous->next = current->next;
    free(current);
}

void traverse(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int search(struct Node* head, int key) {
    int position = 1;

    while (head != NULL) {
        if (head->data == key)
            return position;

        head = head->next;
        position++;
    }
    return -1;
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtBeginning(&head, 5);
    insertAtPosition(&head, 25, 4);

    printf("Linked List: ");
    traverse(head);

    deleteNode(&head, 20);

    printf("After deletion: ");
    traverse(head);

    int pos = search(head, 30);
    if (pos != -1)
        printf("30 found at position %d\n", pos);
    else
        printf("30 not found\n");

    return 0;
}
