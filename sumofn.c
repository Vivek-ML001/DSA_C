// write the code for sumofn.c
// #include <stdio.h>
// int main() {
//     int n, sum = 0, i;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         sum += i; // sum = sum + i
//     }
//     printf("Sum of first %d natural numbers = %d\n", n, sum
//     );
//     return 0;
// }


// recursive method
 #include <stdio.h>
 int sumOfN(int n) {
    if (n <= 0) { // base case
        return 0;
    } else {
        return n + sumOfN(n - 1); // recursive case method
    }
}

int main() {
    int n;
    printf("Enter a positive integer::");
    scanf("%d", &n);
    int result = sumOfN(n);
    printf("Sum of first %d natural numbers = %d\n", n, result);
    return 0; 
}  
