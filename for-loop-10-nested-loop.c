#include <stdio.h>
#include <math.h>

int main (void)
{
    int n1, n2, i, j;

    scanf("%d %d", &n1, &n2);

    for (i=n1; i<=n2; i++) {
        printf("%d => ", i);
        for (j=1; j<=i; j++) {
            if (i%j==0) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
