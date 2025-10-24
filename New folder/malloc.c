// creating a function that mimics the behavior of malloc

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocating memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Initializing and printing the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assigning values
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);
    return 0;
}