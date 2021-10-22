#include <stdio.h>
#include <math.h>

int main (void)
{
    int i;

    for (i=1; i<10; i++) {
        printf("Before break\n");
        if (i%7==0) break;
        else if (i%3==0) continue;
        printf("After break\n");
        printf("%d\n", i);
    }
    return 0;
}
