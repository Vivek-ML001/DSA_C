#include<stdio.h>

int main() {
    int a = 10;
    int *p = &a; // pointer variable p holds the address of variable a
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);    

    return 0;
}