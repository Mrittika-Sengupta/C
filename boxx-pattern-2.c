#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number of lines of the box:");
    scanf("%d", &n);
    printf("\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || i==n || i==(n/2)+1 || j==1 || j==(n/2)+1 || j==n)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
    printf("\n");
    }
    return 0;
}
