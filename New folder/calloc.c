// make  a program using the calloc function to allocate memory for an array of 10 integers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    // Allocating memory for n integers using calloc
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Printing the initialized array (should be all zeros)
    printf("Array elements after calloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);
    return 0;
}
