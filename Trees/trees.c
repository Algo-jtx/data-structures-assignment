#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Function to insert and classify data
struct Node* insert(struct Node* root, int value) {
    // If the spot is empty, put the node here
    if (root == NULL) return createNode(value);
    // Classification logic:
    if (value < root->data) {
        root->left = insert(root->left, value); // Go left if smaller
    } else {
        root->right = insert(root->right, value); // Go right if larger
    }
    return root;
}
void printTree(struct Node* root) {
    if (root != NULL) {
        printTree(root->left);
        printf("%d ", root->data);
        printTree(root->right);
    }
}
// Function to free the tree (prevent memory leak)
void freeTree(struct Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}
int main() {
    struct Node* root = NULL;
    
    // Classifying data: 50 is the root
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    printf("Classified Data (In-order traversal): \n");
    printTree(root);
    printf("\n");

    // Free allocated memory
    freeTree(root);

    return 0;
}