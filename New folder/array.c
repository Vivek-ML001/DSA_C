#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    
    //input array elements
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //print array elements
    printf("Array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}