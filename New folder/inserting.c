#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50};  // array of size 6, 5 elements used
    int n = 5;  // current number of elements
    int new_element = 60;

    // insert new element at the end
    arr[n] = new_element;
    n++;  // increase element count

    // print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


