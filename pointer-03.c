#include <stdio.h>


int sumOfItems(int *x, int z)
{
    int i, sum=0;
    for (i=0; i<z; i++) {
        sum = sum + x[i]; // *(p+i)
    }
    return sum;
}

int main(void)
{
    int list[5] = {12,38,15,10,5};
    int *p = &list[1];
    printf("%d\n", sumOfItems(p,2)); //list => &list[0]

    return 0;
}
