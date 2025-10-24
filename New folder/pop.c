#include <stdio.h>
#define n 5

int stack[n];
int top = -1;

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == n - 1;
}

void push(int x) {
    if (isFull()) {
        printf("Stack Overflow! Cannot insert %d\n", x);
    } else {
        stack[++top] = x;
        printf("%d inserted into stack\n", x);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot delete\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

int main() {
    if (isEmpty())
        printf("Stack is empty at start\n");

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    if (isFull())
        printf("Stack is now full\n");

    pop();
    pop();
    pop();
    pop();
    pop();
    pop(); // This will cause underflow

    return 0;
}
