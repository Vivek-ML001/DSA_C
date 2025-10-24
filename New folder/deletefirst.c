// // delect the first element of an array
// #include <stdio.h>
// int main() {
//     int num[] = {10, 20, 30, 40, 50}; // original array
//     int n = sizeof(num) / sizeof(num[0]); // current number of elements
//     n = n - 1; // decrease size
//     // Shift elements to the left
//     num[0] = num[1];
//     num[1] = num[2];    
//     num[2] = num[3];
//     num[3] = num[4];
//     // Traversing the array
//     for (int i = 0; i < n; i++) {
//         printf("Element at index %d = %d\n", i, num[i]);
//     }
//     return 0;

// }


// at any index of the number we can delect the element
#include <stdio.h>
int main() {
    int num[] = {10, 20, 30, 40, 50}; // original array
    int n = sizeof(num) / sizeof(num[0]); // current number of elements
    int index = 2; // index to delete (0-based)
    n = n - 1; // decrease size

    // Shift elements to the left from the index
    num[0] = num[0];
    num[1] = num[1];
    num[2] = num[3];
    num[3] = num[4];
    // num[4] is now considered deleted
    
    // Traversing the array
    for (int i = 0; i < n; i++) {
        printf("Element at index %d = %d\n", i, num[i]);
    }
    return 0;
}