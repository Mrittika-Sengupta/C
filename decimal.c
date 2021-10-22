#include <stdio.h>
int main ()
{
   int rows,coloumns;
   printf("enter number of rows :");
   scanf("%d",&rows);
   printf("enter number of coloumns :");
   scanf("%d",&coloumns);
   int n= rows;
   float Array[rows][coloumns];
    int i,j,t;
    printf("elements of 2d arry are: \n" );
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            scanf(" %f",&Array[i][j]);
        }
    }
    printf("normal order : \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<coloumns;j++)
        {
            printf("%f ",Array[i][j]);
        }
        printf("\n");
    }
     printf("reverse order : \n");
     for(i=rows-1;i>0;i--)
     {
         for(j=coloumns-1;j>=0;j--)
        {
         printf(" %f",Array[i][j]);
         }
          printf("\n");
     }
    return 0;
}
