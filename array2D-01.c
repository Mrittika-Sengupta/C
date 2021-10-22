#include <stdio.h>
#define n 4
#define r 3
#define c 3
int main(void)
{
    int a[n] = {5,6,7,8};
    int list[r][c] = {{4,7,9},{3,6,8}, {1,2,3}};
    int m[2][4];
    int i, j;

    m[0][0] = 5; m[0][1] = 7; m[0][2] = 3; m[0][3] = 4;
    m[1][0] = 2; m[1][1] = 8;

    // input & output

    for (i=0; i<r; i++) {
       for (j=0; j<c; j++) {
           scanf("%d", &list[i][j]); //00 01 02 10 11 12 20 21 22
       }
    }

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            printf("%d  ", list[i][j]); //00 01 02 10 11 12 20 21 22
        }
        printf("\n");
    }

    return 0;
}
