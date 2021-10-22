#include <stdio.h>
#define n 8

int main(void)
{
    int i, j, p = 2, q = 5, t;
    int num[n] = {15,2,4,15,3,12,29,37};

    // Q1
    for (i=p; i<=q; i++) {
        if (num[i]%2==1) printf("%d ", num[i]);
    }
    printf("\n");

    //Q2
    for (i=0; i<n; i++) {
        if (num[i]%2==0) num[i] = num[i]+1;
    }
    for (i=0; i<n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    // Q3
    i = 1; j = 6;
    t = num[i]; num[i] = num[j]; num[j] = t;
    for (i=0; i<n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

