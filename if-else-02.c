#include <stdio.h>

int main (void)
{
    int a;
    scanf("%d", &a);

    if (a%2==0) {
        printf("%d is an Even number.\n", a);
    } else {
        printf("%d is an Odd number.\n", a);
    }

    return 0;
}
