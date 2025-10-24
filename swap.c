// write a swaping function in C
// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x, y;
//     printf("Enter two integers: ");
//     scanf("%d %d", &x, &y);

//     printf("Before swapping: x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After swapping: x = %d, y = %d\n", x, y);

//     return 0;
// }


// using by the recursive function
#include <stdio.h>
void swap(int *a, int *b) {
    if (a == b) return; // base case: if both pointers point to the same address, do nothing
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("enter the two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
    
}