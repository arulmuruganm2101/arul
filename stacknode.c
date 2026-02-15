#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Push function
void push(int x) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    printf("%d pushed into stack\n", x);
}
// Pop function
int pop() 
{
    if (top == NULL) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        int val = top->data;
        struct Node* temp = top;
        top = top->next;
        free(temp);
        return val;
    }
}
// Peek (top element)
int peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return top->data;
    }
}

// Display stack
void display() {
    struct Node* temp = top;
    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    printf("Popped: %d\n", pop());
    display();
    printf("Top element: %d\n", peek());
    return 0;
}
