#include <stdio.h>
int main ()
{
    int a,b,c,temp;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    temp=c;
    c=b;
    b=a;
    a=temp;
    printf("\nThe swapped values are:\n\n");
    printf(" a=%d\n b=%d\n c=%d\n", a, b, c);
    return 0;
}
