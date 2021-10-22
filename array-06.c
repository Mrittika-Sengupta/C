#include <stdio.h>
#define n 8

int main(void)
{
    int i, j, p = 3;
    int num[n] = {15,2,4,15,3,12,29,37};

    for (i=p; i<n-1; i++) {
        num[i]=num[i+1];
    }
    num[n-1] = -1;

    for (i=0; i<n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

