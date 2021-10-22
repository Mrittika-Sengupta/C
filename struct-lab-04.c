//i. Create an Array of Students of size three and take user input to fill the array.
//ii. Now find the student with the least CGPA and display his or hers Name, ID and CGPA. */

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
