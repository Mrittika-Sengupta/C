#include <stdio.h>

int main (void)
{
    int i, t = 1, n = 7;

    for (i=1; i<=n; i = i+1) {
        t = t * 2;
        printf("%d ", t);
    }

    return 0;
}
