#include <stdio.h>
#include <math.h> 

int main() {
    double a, r;
    int n;
    printf("Enter the starting investment (a): ");
    scanf("%lf", &a);

    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);

    printf("Enter the number of years (n): ");
    scanf("%d", &n);

    printf("Investment Growth Over Time (GP with common ratio %.2f):\n", r);

    for (int i = 1; i <= n; i++) {
        double value = a * pow(r, i - 1);
        printf("Year %d: $%.2f\n", i, value);
    }

    return 0;
}
