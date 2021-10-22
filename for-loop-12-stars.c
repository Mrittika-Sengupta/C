#include <stdio.h>
#include <math.h>

int main (void)
{
    int i, j, n;

    scanf("%d", &n);

    //pattern A
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //pattern B
    for (i=n; i>=1; i--) {
        for (j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //pattern C
    for (i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++) {
            printf("  ");
        }
        for (j=1; j<=2*i-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //pattern D
    for (i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++) {
            printf("  ");
        }
        for (j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
