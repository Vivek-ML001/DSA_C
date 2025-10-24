#include <stdio.h>

// Function for Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;  // Find middle index

        if (arr[mid] == key)
            return mid;   // Key found, return index
        else if (arr[mid] > key)
            high = mid - 1;  // Search in left half
        else
            low = mid + 1;   // Search in right half
    }
    return -1;  // Key not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
