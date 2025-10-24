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

void peek() {
    if (isEmpty()) {
        printf("Stack is empty. No top element\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

int count() {
    return top + 1;
}

void change(int position, int value) {
    if (position < 1 || position > top + 1) {
        printf("Invalid position!\n");
    } else {
        stack[position - 1] = value;
        printf("Value changed at position %d\n", position);
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    peek();

    printf("Total elements: %d\n", count());

    change(2, 99);  // change 2nd element (20 → 99)
    display();

    pop();
    display();

    return 0;
} 
