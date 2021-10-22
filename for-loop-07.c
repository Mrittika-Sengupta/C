#include <stdio.h>
#include <math.h>

int main (void)
{
    double theta, x;

    scanf("%lf", &theta);

    x = (3.14159*theta)/180;

    printf("%lf\n", cos(x));


    return 0;
}
