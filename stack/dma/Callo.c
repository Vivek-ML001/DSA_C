// we want to create an array that store the 5  integers using calloc
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *prt = (int *)calloc(5, sizeof(int)); // allocate memory for 5 integers using calloc

    // checking if memory is allocated or not
    if (prt == NULL) {
        printf("Memory not allocated.\n");
        return 0; // exit the program if memory allocation fails
    }

  
    // print the array
    for(int i = 0; i < 5; i++) {
        printf("%d\n", prt[i]);
    }
    free(prt); // free the allocated memory
    return 0;
}

// in that the calloc function is used to allocate memory for an array of 5 integers and initializes all bytes to zero. 
// The program then prints the values of the array, which will all be zero since calloc initializes the allocated memory to zero. Finally, it frees the allocated memory to prevent memory leaks.
// with in this code, we do not need to populate the array as calloc initializes all elements to zero by default.