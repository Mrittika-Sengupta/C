///Odd Series
#include <stdio.h>
#include <math.h>
void main()
{
    int n,i;
    int sum=0;
    printf("Enter series limit: ");
    scanf("%d",&n);
    ///s1 = n + 1;
    for(i=1;i<=n; i=i+2)
    {
        printf("%d +",i);
        sum=sum+i;
    }
    printf("\n\n");
    printf("The summation of the series:%d\n", sum);
}


