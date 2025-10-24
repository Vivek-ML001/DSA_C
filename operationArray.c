// there are the four basic operations on arrays
// in array creation, insertion, deletion, and traversal
#include <stdio.h>
int main()
{
    int arr[100], n, i, pos, val;
    // create an array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // insert an element
    printf("Enter the position to insert an element: ");

    scanf("%d", &pos);
    printf("Enter the value to insert: ");  

    return 0;
}