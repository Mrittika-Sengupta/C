#include <stdio.h>

int main (void)
{
    int i, sum = 0, n = 7;

    scanf("%d", &n);
    for (i=1; i<n; i = i+1) {
        if (n%i==0) {
            sum = sum + i;
        }
    }
    if (sum==n) printf("Perfect number.\n");
    else printf("Not a Perfect number.\n");
    return 0;
}
