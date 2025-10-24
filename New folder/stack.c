#include <stdio.h>
#define n 5

int stack[n];
int top = -1;

void push(int x) {
    if (top == n - 1) {
        printf("Stack Overflow! Cannot insert %d\n", x);
    } else {
        top++;
        stack[top] = x;
        printf("%d inserted into stack\n", x);
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // This will cause overflow

    return 0;
}
