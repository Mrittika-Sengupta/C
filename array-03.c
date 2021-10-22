#include <stdio.h>
#define n 5

int main(void)
{
    int i, num[n] = {14,51,16,51,8};
    int m = 0;

    for (i=0; i<n; i++) {
        if (num[i]>=num[m]) m = i;
    }

    printf("Smallest element: %d  index = %d pos = %d\n", num[m], m, m+1);

    return 0;
}

