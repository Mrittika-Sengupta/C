#include <stdio.h>

int main()
{
    int n, sum=0;

    for(;;)
    {
        printf("Enter The Number: ");
        scanf("%d", &n);
        if(n%2==1)
            break;
        sum+=n;
    }

    printf("The sum: %d",  sum);

    return 0;
}
