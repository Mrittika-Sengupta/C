///Even Series
#include <stdio.h>
#include <math.h>
void main()
{
    int n1,n2,i;
    int sum=0;
    printf("Enter any number: ");
    scanf("%d",&n1);
    printf("Enter series limit: ");
    scanf("%d",&n2);
    ///s1 = n1 + 1;
    for(i=n1;i<=n2; i= i + 1 )
    {
        printf("%d+",i);
        sum=sum+i;
    }
    printf("\n\n");
    printf("The summation of the series is:%d\n", sum);
}

