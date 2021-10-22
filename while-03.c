#include <stdio.h>

// s = 1 + 3 + 5 +  .... + n

int main (void)
{
    int i, n;
    double prod;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1; prod = 1.0;
    while (i<=n) {
        prod = prod *i;
        i = i+1;
    }
    printf("Factorial of %d is %.0lf.\n", n, prod);

    /*
    i = n; prod = 1;
    while (i>=1) {
        prod = prod *i;
        i = i-1;
    }
    printf("Factorial of %d is %d.\n", n, prod);
    */
    return 0;
}
