#include <stdio.h>

#define r 4
#define c 4

int main(void)
{
    int a[r][c];
    int i, j;

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if (i==j) a[i][j] = 1;
            else if (i>j) a[i][j] = 2;
            else a[i][j] = 3;
        }
    }

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d  ", a[i][j]); //00 01 02 10 11 12 20 21 22
        }
        printf("\n");
    }


    return 0;
}
