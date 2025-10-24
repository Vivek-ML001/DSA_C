// find the fibonacii from the recursive mode
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: fibonacci of 0 is 0
    } else if (n == 1) {
        return 1; // Base case: fibonacci of 1 is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}



int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci of %d is %d\n", num, fibonacci(num));
    }
    return 0;
}