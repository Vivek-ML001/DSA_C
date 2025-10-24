// we want to add ther element in that array IN the indexing 
#include <stdio.h>
int main() {
    int arr[7] = {10,20,30,40,50,60};
    int n = 6; // current number of elements
    int new_element = 35;
    

    // shift elements to the right to make space at the desired position
    for(int i = n; i > 3; i--) {
        arr[i] = arr[i - 1];
    }

    // insert new element at the specified position
    arr[3] = new_element;
    n++;  // increase element count

    // print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}