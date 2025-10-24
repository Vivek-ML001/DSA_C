#include <stdio.h>

// Recursive function to calculate sum
int sumOfNatural(int n) {
    if (n == 1) {
        return 1;  // base case
    } else {
        return n + sumOfNatural(n - 1);  // recursive case
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers = %d\n", n, sumOfNatural(n));

    return 0;
}
 