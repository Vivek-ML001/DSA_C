#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // array with extra capacity
    int n = 5;   // current number of elements
    int value = 99;

    // Insert at the end
    arr[n] = value;
    n++;  // increase size

    // Traverse (print) array
    printf("Array after insertion at end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
