#include <stdio.h>

int factr(int n)
{
    if (n==0) return 1;
    else return n*factr(n-1);

}

int main(void)
{
    int a = factr(3);

    printf("%d\n", a);

    return 0;
}

