// find the sum of given numbers
#include <stdio.h>
int sum(int n) {
    if(n == 0)
     return 0;
    else
     return n + sum(n - 1);

}


int main() {
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("the sum of first %d numbers is %d", num, sum(num));
    return 0;
}