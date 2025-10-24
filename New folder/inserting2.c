// add teh element in that array IN THE BEGINNING
#include <stdio.h>
int main() {
    int arr[7] = {10,20,30,40,50,60};
    int n = 6; // current number of elements
    int new_element = 5;

    // shift elements to the right to make space at the beginning
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // insert new element at the beginning
    arr[0] = new_element;
    n++;  // increase element count

    // print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}