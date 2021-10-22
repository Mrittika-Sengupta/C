#include <stdio.h>

// s = 1 + 3 + 5 +  .... + n

int main (void)
{
    int a, b, r;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    while (b%a!=0) {
        r = b % a; //4
        b = a;    // 6
        a = r; // 4
    }
    printf("gcd = %d\n", a);




    return 0;
}
