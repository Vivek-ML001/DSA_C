#include<stdio.h>
int main()
{
    int new_element = 99;
    int num[10] = {10, 20, 30, 40, 50};  // array with extra capacity
    int n = sizeof(num)/sizeof(num[0]); // current number of elements
    n = n+1; // increase size

    num[5] = num[4];
    num[4] = num[3];
    num[3] = num[2];
    num[2] = num[1];
    num[1] = num[0];
    num[0] = new_element;

    // Traversing the array
    for(int i = n-1; i >=1; i--) {
        printf("Element at index %d = %d\n", i, num[i]);
    }
    return 0;
}