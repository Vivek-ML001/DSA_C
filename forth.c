#include<stdio.h>
int main() {
    int phone1, phone2, phone3, min;
    printf("Enter th price of phone 1: ");
    scanf("%d", &phone1);

    printf("Enter the price of phone 2: ");
    scanf("%d", &phone2);

    printf("Enter the price of phone 3: ");
    scanf("%d", &phone3);

    if(phone1 < phone2 && phone1 < phone3) {
        min = phone1;
    } else if(phone2 < phone1 && phone2 < phone3) {
        min = phone2;
    } else {
        min = phone3;
    }

    printf("The best  phone is: %d", min);

    return 0;
}


