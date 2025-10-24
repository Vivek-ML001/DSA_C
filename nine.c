// #include <stdio.h>

// int main() {
//     int a, b;

//     // Input
//     printf("Enter two positive integers 'a' and 'b': ");
//     scanf("%d %d", &a, &b);

//     // Euclidean algorithm to find GCD
//     while (b != 0) {
//         int temp = b;
//         b = a % b;  
//         a = temp;   
//     }

    
//     printf("GCD of the given numbers is: %d\n", a);

//     return 0;
// }




#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two positive integers 'a' and 'b': ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b)
            a = a - b;  // subtract smaller from larger
        else
            b = b - a;
    }

    printf("GCD of the given numbers is: %d\n", a);

    return 0;
}
