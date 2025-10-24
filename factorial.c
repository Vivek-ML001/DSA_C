// write the code for factorial.c

// #include <stdio.h>

// int main() {
//     int n, i;
//     long long fact = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         fact = fact * i;
//     }

//     printf("Factorial of %d = %lld\n", n, fact);

//     return 0;
// }



// recursive method
#include <stdio.h>
long long factorial(int n) {
    if (n == 0) {
        return 1;   // base case
    } else {
        return n * factorial(n - 1); // recursive case
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long long result = factorial(n);
    printf("Factorial of %d = %lld\n", n, result);

    return 0;
}
