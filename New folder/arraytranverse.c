// // we can tranverse the array
// #include<stdio.h>
// int main()
// {
//     int num[]={1,2,3,4,5};
//     int n = sizeof(num)/sizeof(num[0]);
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",num[i]);
//     }
//     return 0;   
// }


#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Traversing the array
    for(int i = 0; i < 5; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }

    return 0;
}
