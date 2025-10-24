#include <stdio.h>
int main() {
    int arr[5];   // Declare an array of size 5
    int i;

    // Input values
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Display values
    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
