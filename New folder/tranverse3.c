#include<stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int value = 99;
    int pos = 0; // position to insert


    // sgifting the elements to right
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = value;
    n++; // increase size


    // Traversing the array
    for(int i = 0; i < n; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);




} 
    return 0;

}    