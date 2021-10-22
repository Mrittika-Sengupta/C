#include <stdio.h>
#define n 5

void displayArray(int x[], int z)
{
    int i;
    for (i=0; i<z; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    return;
}

void reverse_array(int x[], int z)
{
    int i = 0, j = z-1, t;
    while (i<z/2) {
        //swap element i, j
        t = x[i]; x[i] = x[j]; x[j] = t;
        i = i + 1; j = j - 1;
    }
    return;
}

int main(void)
{
    int i, a[n] = {6,7,8,3,4,9}; // 4, 3,  8,  7,  6
    int list[3] = {2,4,6};

    reverse_array(a,n);
    displayArray(a,5);

    reverse_array(list,3);
    displayArray(list,3);

    return 0;
}
