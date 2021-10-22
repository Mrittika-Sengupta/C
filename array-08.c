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

void sort_array(int x[], int z)
{
    int i, j, m, t;
    for (i=0; i<z; i++) {
        // select smallest element in between index i and n-1
        // index of smallest element m
        m = i;
        for (j=i+1; j<z; j++) {
            if (x[j]>x[m]) m = j;
        }
        // swap elements i, m, we place the smallest at i
        t = x[i]; x[i] = x[m]; x[m] = t;
    }
    return;
}

int main(void)
{
    int i, j, m, t;
    int a[n] = {6,73,8,13,4};
    int b[4] = {23,45,15,8};

    displayArray(a,n);
    sort_array(a,n);
    displayArray(a,n);

    sort_array(b,4);
    displayArray(b,4);

    return 0;
}
