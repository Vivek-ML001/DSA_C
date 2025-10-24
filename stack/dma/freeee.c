// that help to free the allocated memory using malloc or calloc
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
    for(int i = 0; i < 5; i++) {
        printf("%d\n", prt[i]);
    }
    free(prt); // free the allocated memory the 
    return 0;
}