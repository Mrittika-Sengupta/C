#include <stdio.h>

int main (void)
{
    int a;
    scanf("%d", &a);

    if (a<0) {
        a = a + 10;
    } else {
        a = a + 5;
    }

    printf("%d\n", a);

    return 0;
}
