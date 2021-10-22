#include <stdio.h>
#define n 5

int main(void)
{
    int i, num[n] = {14,51,16,71,8};
    int sum = 0;
    float avg;

    for (i=0; i<n; i++) {
        sum = sum + num[i];
    }
    printf("Sum of the elements: %d\n", sum);
    avg = (float)sum/n;
    printf("Average of the elements: %0.2f\n", avg);
    return 0;
}

