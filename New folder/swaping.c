// // swaping two numbers 

// #include<stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
    
//     //swaping logic
//     temp=a;
//     a=b;
//     b=temp;

//     printf("After swaping: a=%d b=%d",a,b);
//     return 0;
// }



// we can used the pointer to swaping two numbers

#include<stdio.h>
void swaping(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    swaping(&a,&b); // passing address of a and b
    printf("After swaping: a=%d b=%d",a,b);
    return 0;
}