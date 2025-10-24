#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break; // stop searching once found
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}


// that is unsorted list // linear search is used in unsorted list
// that is sorted list // binary search is used in sorted list