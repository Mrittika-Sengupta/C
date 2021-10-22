#include <stdio.h>
#define n 8

int main(void)
{
    int i, j, count;
    int num[n] = {15,2,3,15,3,18,19,37};

    for (i=0; i<n; i++) {
        count = 0;
        for (j=i+1; j<n; j++) {
            if (num[j]==num[i]) {
                count = count + 1;
                break;
            } //else printf("%d ", num[i]);
        }
        if (count==0) printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}

