// create a 2D array
#include <stdio.h>
int main() {
    int arr[3][4];
    int i, j;
    // Input values
    printf("Enter 12 numbers for a 3x4 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Display values
    printf("The 3x4 matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}