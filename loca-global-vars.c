#include <stdio.h>

int n = 5;

int temp(void)
{
    int n = 34;
    int i = n + 2;
    int j = 3;
    printf("%d %d %d\n", i, j, n);
    return 0;
}
int main(void)
{
    int i = n + 7;
    int k = 8;
    printf("%d %d %d\n", i, k, n);
    temp();
    return 0;
}

