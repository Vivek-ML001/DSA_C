// sum of the element by using recursion
#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 is 0
    } else {
        return n + sum(n - 1); // Recursive case
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Sum is not defined for negative numbers.\n");
    } else {
        printf("Sum of first %d natural numbers is %d\n", num, sum(num));
    }
    return 0;
}