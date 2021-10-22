#include <stdio.h>

int main (void)
{
    int i, count = 0, n = 7;

    scanf("%d", &n);
    for (i=1; i<=n; i = i+1) {
        if (n%i==0) {
            count = count + 1;
            printf("%d ", i);
        }
    }
    printf("\nNumber of factors: %d\n", count);

    if (count==2) printf("Prime Number\n");
    else printf("Not a Prime Number\n");

    return 0;
}
