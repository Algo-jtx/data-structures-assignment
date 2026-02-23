#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

// ========== LINEAR QUEUE ==========
int linearQueue[MAX];
int front = -1, rear = -1;

void enqueueLinear(int value) {
    if (rear == MAX - 1) {
        printf("Queue is FULL!\n");
        return;
    }
    if (front == -1) front = 0;
    rear++;
    linearQueue[rear] = value;
    printf("Enqueued: %d\n", value);
}

void dequeueLinear() {
    if (front == -1 || front > rear) {
        printf("Queue is EMPTY!\n");
        return;
    }
    printf("Dequeued: %d\n", linearQueue[front]);
    front++;
    if (front > rear) {
        front = rear = -1;
    }
}

void displayLinear() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", linearQueue[i]);
    }
    printf("\n");
}

// ========== CIRCULAR QUEUE ==========
int circularQueue[MAX];
int cFront = -1, cRear = -1;

void enqueueCircular(int value) {
    if ((cRear + 1) % MAX == cFront) {
        printf("Circular Queue is FULL!\n");
        return;
    }
    if (cFront == -1) cFront = 0;
    cRear = (cRear + 1) % MAX;
    circularQueue[cRear] = value;
    printf("Enqueued: %d at position %d\n", value, cRear);
}

void dequeueCircular() {
    if (cFront == -1) {
        printf("Circular Queue is EMPTY!\n");
        return;
    }
    printf("Dequeued: %d from position %d\n", circularQueue[cFront], cFront);
    if (cFront == cRear) {
        cFront = cRear = -1;
    } else {
        cFront = (cFront + 1) % MAX;
    }
}

void displayCircular() {
    if (cFront == -1) {
        printf("Circular Queue is empty\n");
        return;
    }
    printf("Circular Queue: ");
    int i = cFront;
    while (true) {
        printf("%d ", circularQueue[i]);
        if (i == cRear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// ========== LINKED QUEUE ==========
struct Node {
    int data;
    struct Node* next;
};

struct Node* lFront = NULL;
struct Node* lRear = NULL;

void enqueueLinked(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if (lRear == NULL) {
        lFront = lRear = newNode;
    } else {
        lRear->next = newNode;
        lRear = newNode;
    }
    printf("Enqueued: %d\n", value);
}

void dequeueLinked() {
    if (lFront == NULL) {
        printf("Linked Queue is EMPTY!\n");
        return;
    }
    struct Node* temp = lFront;
    printf("Dequeued: %d\n", lFront->data);
    lFront = lFront->next;
    if (lFront == NULL) lRear = NULL;
    free(temp);
}

void displayLinked() {
    if (lFront == NULL) {
        printf("Linked Queue is empty\n");
        return;
    }
    struct Node* temp = lFront;
    printf("Linked Queue: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// ========== MAIN MENU ==========
int main() {
    int choice, type, value;
    
    printf("========================================\n");
    printf("      QUEUE DATA STRUCTURES IN C\n");
    printf("========================================\n");
    
    while (1) {
        printf("\nSelect Queue Type:\n");
        printf("1. Linear Queue\n");
        printf("2. Circular Queue\n");
        printf("3. Linked Queue\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &type);
        
        if (type == 4) break;
        
        while (1) {
            printf("\n--- Operations ---\n");
            printf("1. Enqueue (Add)\n");
            printf("2. Dequeue (Remove)\n");
            printf("3. Display\n");
            printf("4. Back to Main Menu\n");
            printf("Choice: ");
            scanf("%d", &choice);
            
            if (choice == 4) break;
            
            switch (choice) {
                case 1:
                    printf("Enter value: ");
                    scanf("%d", &value);
                    if (type == 1) enqueueLinear(value);
                    else if (type == 2) enqueueCircular(value);
                    else if (type == 3) enqueueLinked(value);
                    break;
                case 2:
                    if (type == 1) dequeueLinear();
                    else if (type == 2) dequeueCircular();
                    else if (type == 3) dequeueLinked();
                    break;
                case 3:
                    if (type == 1) displayLinear();
                    else if (type == 2) displayCircular();
                    else if (type == 3) displayLinked();
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        }
    }
    
    printf("Goodbye!\n");
    return 0;
}