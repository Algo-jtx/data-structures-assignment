#include <stdio.h> // it includes the standard input/output functions like print f and scan f
#define SIZE 5 //Defines a constant size meaning the stack can hold a maximum of 5 items
int stack[SIZE]; // Creates an array of integers with the length 5
int top = -1;// Tracks the indexes of the top element in the stack , so -1 means that the stack is empty
void push (int value){
    if(top == SIZE - 1){
        printf("The stack is full! Cannot push %d\n",value);// checks if the stack is full and if yes we cannot push anymore.
    }else{
        top++; // increment the top to the next empty slot
        stack[top] = value;// store the value at the new top index
        printf("%d pushed into stack\n", value);
    }
}
void pop(){
    if (top == -1){
        printf("Stack is empty\n"); // checks if the stack is empty and if yes there is nothing to pop
    }else{
        printf("%d popped from the stack \n", stack[top]);//shows the value being removed
        top--;
    }
}
void display(){
    if (top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements: \n");
        for (int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}
int main (){
    // adds the items in the stack i.e 40,30,20,10
    push(10);
    push(20);
    push(30);
    push(40);
    //show the current stack
    display();
    // remove the top element 40
    pop();
    // show the current stack
    display();
    return 0;
}