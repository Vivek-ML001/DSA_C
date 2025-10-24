// update an array by adding an element at a specific position

#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // array with size 10 (extra space)
    int n = 5;   // current number of elements
    int pos = 2; // position (index) where we insert
    int value = 99;

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = value;
    n++; // increase size

    // Traverse (print) array after insertion
    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
