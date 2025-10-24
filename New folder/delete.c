#include <stdio.h>
int main() {
    int num[7] = {10,20,30,40,50,60};
    int n = 6; // current number of elements

    num[0] = num[1];
    num[1] = num[2];
    num[2] = num[3];
    num[3] = num[4];
    num[4] = num[5];
    n--;  // decrease element count
    // print updated array
    for(int i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    return 0;

}
