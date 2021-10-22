#include <stdio.h>

// s = 1 + 3 + 5 +  .... + n

int main (void)
{
    int i, s, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = 1; s = 0;
    while (i<=n) {
        s = s + i;
        i = i + 2;
    }
    printf("Sum of the series: %d\n", s);
    return 0;
}
