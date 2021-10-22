#include <stdio.h>

int main (void)
{
    int n, r, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = 0;
    do {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
        printf("%d\n", r);
    } while (n!=0);
    printf("Sum of the digits: %d\n", sum);
    return 0;
}
