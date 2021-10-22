/*
    Purpose of this program:
    Name of the Programmer:
    Date:

 */

#include <stdio.h>

// This is called macro definition
#define PI 3.14159

int main (void)
{
    float radius = 7.25F;
    float area;
    const float pi = 3.14159F;

    radius = 5.5;
    // pi = 2.1234; we can't do this

    area = pi * radius * radius;

    printf("%f\n", area);

    return 0;
}
