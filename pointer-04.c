#include <stdio.h>


int sumOfItems(int *x, int z)
{
    int i, sum=0;
    for (i=0; i<z; i++) {
        sum = sum + x[i]; // *(p+i)
    }
    return sum;
}

int main(void)
{
    int i,j,n;
    int x = 0, y = 1, z = 0;

    scanf("%d", &n);

    int list[n][n];


    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i>j) list[i][j] = x;
            else if (i==j) list[i][j] = y;
            else if (i<j) list[i][j] = z;
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%d  ", list[i][j]);
        }
        printf("\n");
    }

    return 0;
}
