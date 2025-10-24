// to find out gteh nth fabonaci number

#include <stdio.h>

int fabon(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else 
        return fabon(n - 1) + fabon(n - 2);

}

int main() {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("the fabonaci number at position %d is %d", num, fabon(num));
    return 0;
    
}