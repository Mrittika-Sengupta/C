#include <stdio.h>
#include <math.h>

int main (void)
{
    double theta, x, term, sum;
    int i;

    scanf("%lf", &theta);
    x = 3.14159*theta/180;
/*
    sum = 0.0; term = 1; i = 0;
    do {
        sum = sum + term;
        term = (-term*x*x)/((i+1)*(i+2));
        i = i + 2;
    } while (abs(term)>=0.0000001);
*/
    sum = 0.0; term = 1; i = 0;
    while (fabs(term)>=0.0000001) {
        sum = sum + term;
        printf("%d %lf %lf\n", i, term, sum);
        term = (-term*x*x)/((i+1)*(i+2));
        i = i + 2;
    }

    printf("\n%lf\n", sum);

    return 0;
}
