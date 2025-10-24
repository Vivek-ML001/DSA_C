// // write a number of swaping two number using normal approch 

// #include <stdio.h>
// int main() {
//     int a, b, temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Swapping using a temporary variable
//     temp = a;
//     a = b;
//     b = temp;

//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }



// by with the help of pointer
#include <stdio.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);  // passing addresses of a and b

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}