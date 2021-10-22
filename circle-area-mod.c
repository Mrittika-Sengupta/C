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

    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle is: %f\n", area);

    return 0;
}
