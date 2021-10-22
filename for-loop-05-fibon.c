#include <stdio.h>

int main (void)
{
    int n, a, b, c, i;

    scanf("%d", &n);

    if (n==0) printf("%d\n", n);
    else if (n==1) printf("%d\n", n);
    else {
        printf("%d %d ", 0, 1);
        a = 0; b = 1;
        for (i=2; i<=n; i++) {
            c = a + b;
            a = b; b = c;
            printf("%d ", c);
        }
    }
    return 0;
}
