#include <stdio.h>

int main(void)
{
    int a = 17, c = 91;
    float b = 3.75F;
    double d = 12.34;
    char ch = 'A';

    int* p;  // p is a pointer to an integer,
            //  meaning it holds the address of an integer variable
    double *q = &d;

    p = &a;
    printf("%d  %p %f  %p\n", a, &a, b, &b);

    printf("%p %p\n", p, &c);

    printf("%d %p %p %p\n", c, &c, p, &p);
    printf("%lf %p %p %p\n", d, &d, q, &q);

    // 32 bits => 2^32 number of bytes => 4 GB
    // 3 bits => 000 001 010 011 100 101 110 111 => 2^3 = 8 bytes

    p = &c;
    printf("%p %d %p\n", p, *p, &p);

    return 0;
}
