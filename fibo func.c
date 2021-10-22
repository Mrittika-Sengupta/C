#include<stdio.h>
int fibon_r(int n)
{
if(n==0 || n==1) return n;

else {
    return fibon_r(n-1)+fibon_r(n-2);
}
}

int main()
{
    int x = fibon_r(5);
    printf("%d",fibon_r(x));
}
