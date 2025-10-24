// Recursion example in C

// Function to calculate factorial of a number

// normal method 


// the sytnax of the function is
// #include <stdio.h>
// int factorial(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }



// #include <stdio.h>

// int Sum(int A[], int n) {
//     int S = 0;
//     for (int i = 0; i < n; i++) {
//         S = S + A[i];
//     }
//     return S;
// }

// int main() {
//     int n, i;
    
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
    
//     int A[n];
//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &A[i]);
//     }
    
//     int result = Sum(A, n);
//     printf("Sum of array elements = %d\n", result);
    
//     return 0;
// }



// recursive method
#include <stdio.h>
int Sum(int A[], int n) {
    if (n <= 0) {          // base case 
        return 0;
    } else {
        return Sum(A, n - 1) + A[n - 1];       // recursive case 
    }
}

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int A[n];
    printf("Enter %d elements:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    int result = Sum(A, n);
    printf("Sum of array elements = %d\n", result);
    
    return 0;
}  