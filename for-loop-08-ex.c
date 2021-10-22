#include <stdio.h>
#include <math.h>

int main (void)
{
    double theta, x, numerator, denominator, term, sum;
    int i, j;
    double f;

    scanf("%lf", &theta);
    x = 3.14159*theta/180;

    sum = 0.0;
    for (i=0; i<10; i++) {
        numerator = pow(-1,i)*pow(x,2*i+1);
        for (f=1, j=1; j<=2*i+1; j++) f = f * j;
        denominator = f;
        // compute numerator & denominator
        // compute each term
        term = numerator / denominator;
        sum = sum + term;
    }
    printf("%lf\n", sum);

    return 0;
}
