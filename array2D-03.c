#include <stdio.h>
#define n 4
#define r 3
#define c 3
int main(void)
{
    int a[r][c] = { {4,7,9},
                    {3,6,8},
                    {1,2,3}
                  };

    int b[r][c] = { {1,2,3},
                    {2,2,2},
                    {3,2,1}
                  };

    int t[c][r];    // col X row    a[i][j]  => t[j][i]

    int i, j;

    for (i=0;i<r; i++) {
        for (j=0; j<c; j++) {
            t[j][i] = a[i][j];
        }
    }

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d  ", t[i][j]); //00 01 02 10 11 12 20 21 22
        }
        printf("\n");
    }

    return 0;
}
