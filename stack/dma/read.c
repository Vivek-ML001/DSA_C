// realloc that help to reallocate the memory and resize the memory block
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *prt = (int *)malloc(5 * sizeof(int)); // allocate memory for 5 integers using malloc

    // checking if memory is allocated or not
    if (prt == NULL) {
        printf("Memory not allocated.\n");
        return 1; // exit the program if memory allocation fails
    }

    // populated the array
    for (int i = 0; i < 5; i++) {
        prt[i] = i + 1;
    }

    // print the array
    printf("Original array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", prt[i]);
    }

    // reallocate memory to hold 10 integers
    int *new_prt = (int *)realloc(prt, 10 * sizeof(int));
    if (new_prt == NULL) {
        printf("Memory reallocation failed.\n");
        free(prt); // free the original memory if realloc fails
        return 1;
    }
    prt = new_prt;

    // populate the new elements
    for (int i = 5; i < 10; i++) {
        prt[i] = i + 1;
    }

    // print the resized array
    printf("Resized array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\n", prt[i]);
    }

    free(prt); // free the allocated memory
    return 0;
}