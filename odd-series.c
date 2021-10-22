///Odd Series
#include <stdio.h>
#include <math.h>
void main()
{
    int n,i;
    ///int s1=0;
    printf("Enter series limit: ");
    scanf("%d",&n);
    ///s1 = n + 1;
    for(i=1;i<=n; i=i+2)
    {
        printf("%d + ",i);

    }
    return 0;
}


