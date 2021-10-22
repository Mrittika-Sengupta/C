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
    int i, j, sum=0;

    for (i=0; i<r; i++) {
        sum = 0;
        for (j=0; j<c; j++) {
            sum = sum + a[i][j];
        }
        printf("Sum of all elements at row %d: %d\n", i, sum);
    }

    for (j=0; j<c; j++) {
        sum = 0;
        for (i=0; i<r; i++) {
            sum = sum + a[i][j];
        }
        printf("Sum of all elements at col %d: %d\n", j, sum);
    }

    return 0;
}
