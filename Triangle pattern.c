#include <stdio.h>

int printTrianglePattern(int numRows)
{
    int i, j;
    for (i=1; i<=numRows; i=i+1 ) {
        for (j=1; j<=numRows-i; j=j+1){
            printf("  ");
        }
        for(j=1; j<=2*i-1 ;j=j+1){
            printf("* ");
        }
        printf("\n");
    }
}

int main(void)
{
    int rows;
    printf("Enter a number : ");
    scanf("%d",&rows);

    printTrianglePattern(rows);

    return 0;
}
