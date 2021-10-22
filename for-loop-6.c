#include <stdio.h>

int main()
{
    int i;
    float initial, time, irate, afee, Balance;

    printf("Enter Initial Balance: ");
    scanf("%f", &initial);

    printf("Enter Yearly interest rate: ");
    scanf("%f", &irate);

    printf("Enter Annual Fee: ");
    scanf("%f", &afee);

    printf("Enter the number of years: ");
    scanf("%f", &time);

    for(i=1; i<=time;i++)
    {
        Balance= initial+(initial*time*irate)/100-afee;
    }

    printf("Balance after %f years is %f", time, Balance);

    return 0;
}
