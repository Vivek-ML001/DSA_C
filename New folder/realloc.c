// make a program using the realloc function to reallocate memory for an array of integers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n;
    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    // Allocating memory for n integers using malloc
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Initializing the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assigning values
    }

    // Printing the initial array
    printf("Initial array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocating memory for new_n integers
    printf("Enter new number of elements: ");
    scanf("%d", &new_n);
    int *temp = (int *)realloc(arr, new_n * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(arr); // Free the original memory if realloc fails
        return 1; // Exit if memory reallocation fails
    }
    arr = temp;

    // Initializing the new elements if the array has grown
    for (int i = n; i < new_n; i++) {
        arr[i] = i + 1; // Assigning values to new elements
    }

    // Printing the reallocated array
    printf("Reallocated array elements:\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);
    return 0;
}