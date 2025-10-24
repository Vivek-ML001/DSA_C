#include <stdio.h>

int main() {
    printf("%zu %zu %zu %zu\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
    return 0;
}


// here zu is used for the size_t type which is the return type of sizeof operator.
// size_t is an unsigned integer type used to represent the size of objects in bytes.