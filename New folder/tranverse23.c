// let us mak the tranverse the array
#include<stdio.h>
int main()
{
    int num[5] = {10, 20, 30, 40, 50};
    int n = sizeof(num)/sizeof(num[0]); // calculate the size of array
    for(int i=0; i<n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;

}




