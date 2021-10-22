#include <stdio.h>

void test(int x)
{
   x = 10;
   printf("x = %d\n", x);
   return;
}

void change(int* w)
{
   *w = 15;
   printf("*w = %d\n", *w);
   return;
}
// call by value: calling a function by value
// call by pointer / call by reference/address
// if you make any change that takes place in the caller function
void swap(int *c, int *d)
{
    int t = *c;
    *c = *d;
    *d = t;
    return;
}

int main(void)
{
    int a = 5;
    int i = 3, j = 8;
    //test(a); change(&a); printf("a = %d\n", a);
    swap(&i,&j);  // scanf("%d", &a);
    printf("%d %d\n", i,j);
    return 0;
}
