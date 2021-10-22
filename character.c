#include <stdio.h>
int main ()
{
   int rows,coloumns;
   printf("enter number of rows :");
   scanf("%d",&rows);
   printf("enter number of coloumns :");
   scanf("%d",&coloumns);
   char Array[rows][coloumns];
    int i,j;
    printf("elements of 2d arry are: \n" );
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            scanf(" %c",&Array[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            printf("%c",Array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
