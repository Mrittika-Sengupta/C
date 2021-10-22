#include <stdio.h>

// s = 1 + 3 + 5 +  .... + n

int main (void)
{
    int a, b, i;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    i=a;
    while (b%i!=0 || a%i!=0) {
        i = i - 1;
    }
    printf("gcd = %d\n", i);
    return 0;
}
