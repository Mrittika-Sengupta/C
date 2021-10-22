#include <stdio.h>

long factorial(int n)
{
    int i;
    long prod = 1;
    for (i=1; i<=n; i++) {
        prod = prod * i;
    }
    return prod;
}

int max(int a, int b)
{
    if (a>=b) return a;
    else return b;
}

float average(int a, int b)
{
    return (a+b)/2.0F;

}

int main(void)
{
    int x = 5, y = 67, i;

    long fact = factorial(x);
    printf("%ld\n", fact);

    printf("%ld\n", factorial(7));
    printf("%ld\n", factorial(15));

    printf("%f\n", average(x,y));

    return 0;
}
