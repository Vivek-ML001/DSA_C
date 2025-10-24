#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, low = 0, high = n - 1, mid;
    int found = 0;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
            low = mid + 1;  // search right half
        else
            high = mid - 1; // search left half
    }

    if (!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
