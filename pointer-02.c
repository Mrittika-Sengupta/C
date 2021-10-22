#include <stdio.h>

int main(void)
{
    int list[5] = {12,34,56,78,90};
    int* p = &list[1];
    int k = 1;

    printf("%d %d %d %d\n", *p + 1, *p-1, *(p+2), *(p-1));
    printf("%d %d\n", *(p+k), p[k]);
    printf("%d\n", p[0]+p[2]+5); // 34 + 78 + 5

    return 0;
}
