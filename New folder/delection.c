// element can delete end of the array
#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // array with extra capacity
    int n = 5;   // current number of elements
    int pos = 5; // position (index) to delete

    // Shift elements to the left from the position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // decrease size

    // Traverse (print) array after deletion
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}