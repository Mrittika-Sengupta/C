#include <stdio.h>
void main()
{
   int i,n,sum=0;
   printf("Enter the number: ");
   scanf("%d",&n);
   //printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i++)
   {
     printf("%d+",i*i);
     sum=sum+(i*i);
   }
   printf("\n\n");
   printf("The Summation of the series is:%d\n", sum);

}
