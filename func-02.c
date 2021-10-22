#include <stdio.h>

int gcd(int a, int b); // function declaration or prototype
int lcm(int a, int b);
int checkLeapYear(int year);
int isPrime(int n);

void displayNSU20Times(void)
{

    return;
}

int main(void)
{
    int x = 15, y = 65, i;

    //scanf("%d %d", &x, &y);

    i = gcd(x,y); // calling of a function or function invocation

    printf("Leapyear = %d\n", checkLeapYear(2021));

    printf("Prime = %d\n", isPrime(457));

    return 0;
}

// function definition

int gcd(int a, int b) // function header
{ // function body starts
    int r;
    while (b%a!=0) {
        r = b % a;
        b = a;
        a = r;
    }
    return a;
} // function body ends

int lcm(int a, int b)
{
    // a X b = gcd(a,b) X lcm(a,b)
    int n = (a*b)/gcd(a,b);
    return n;
}

int checkLeapYear(int year)
{
    if (year%4==0 && (year%100!=0 || year%400==0)) {
        return 1;
    }
    return 0;
}

int isPrime(int n)
{
    int i;
    int m = (int) sqrt(n);
    if (n==1) return 0;
    for (i=2; i<=m; i++) {
        if (n%i==0) return 0;
    }
    return 1;
}
