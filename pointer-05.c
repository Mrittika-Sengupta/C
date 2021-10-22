#include <stdio.h>

int main(void)
{
    int b = 7, c = 9;
    int* p = &b;
    int* q = &c;

    *q = *p; // c = b;

    printf("%d %d\n", *p, c); // p holds the address of b, *p means value of b


    return 0;
}
