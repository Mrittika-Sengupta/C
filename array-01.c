#include <stdio.h>

int main(void)
{
    int i, num[5] = {4,5,6,7,8};

    num[0] = 38; num[1] = 17; num[2] = 81;
    num[3] = 53; num[4] = 5;

    for (i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }

    for (i=0; i<5; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}

