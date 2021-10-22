#include <stdio.h>

int printPattern(int row)
{
    int i,j;

    for( i=row ; i>=1; i=i-1){
        for (j=1 ; j<=i ; j=j+1){
            printf("%d ",j);
        }
        printf("\n");
    }
}


int main(void)
{
    int row;
    printf("Enter row : ");
    scanf("%d",&row);

    printPattern(row);
}
