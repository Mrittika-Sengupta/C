#include <stdio.h>

int main (void)
{
    int n, r, sum, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = 0; m = 0;
    do {
        r = n % 10;
        n = n / 10;
        m = 10*m + r;
        sum = sum + r;
        printf("%d", r);
    } while (n!=0);
    printf("Sum of the digits: %d\n", sum);
    printf("Reverse number: %d\n", m);
    return 0;
}
