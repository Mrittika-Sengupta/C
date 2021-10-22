
#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
};

int manhattan_distance(struct Point a, struct Point b)
{
    return (int) (fabs(a.x-b.x) + fabs(a.y-b.y));
}

int main (void)
{
    struct Point p = {15, 6};
    struct Point q = {11, 45};

    printf("%d\n", manhattan_distance(p,q));

    return 0;
}
