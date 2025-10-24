#include <stdio.h>
int main() {
    int num[]={10,20,30,40,50};
    int n = sizeof(num)/sizeof(num[0]);
    //traversing array using pointer
    for(int i = 0; i < n; i++) {
        printf("%d", num[i]); // Accessing array elements using pointer arithmetic
    }
    return 0;


}