#include <stdio.h>

int main (void)
{
    int n, m, i, count=0;

    scanf("%d", &n);
    m = (int) sqrt(n);
    for (i=2; i<=m && count==0; i++) {
        if (n%i==0) count = count + 1;
    }
    if (count==0 && n!=1) printf("%d is a prime number.\n", n);
    else printf("%d is NOT a prime number.\n", n);
    return 0;
}
