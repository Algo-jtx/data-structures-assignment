#include <stdio.h>

// Function to traverse and print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // 1. Initializing a fixed-size array (Contiguous Memory)
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Initial Array: ");
    printArray(arr, size);

    // 2. Insertion Operation (Middle) - O(n) complexity due to shifting
    int pos = 2, val = 25;
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1]; // Shifting elements to the right
    }
    arr[pos] = val;
    size++;
    printf("After Inserting 25 at index 2: ");
    printArray(arr, size);

    // 3. Deletion Operation - O(n) complexity due to shifting
    int del_pos = 3;
    for (int i = del_pos; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Shifting elements to the left
    }
    size--;
    printf("After Deleting element at index 3: ");
    printArray(arr, size);

    return 0;
}