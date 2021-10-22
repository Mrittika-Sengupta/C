#include <stdio.h>

int main (void)
{
   // declare variables
    int year;

   // take inputs
    scanf("%d", &year);
   // process input to produce output
   if (year%4==0) {
        if (year%400==0 || year%100!=0)
            printf("%d is a Leap Year.\n", year);
        else printf("%d is NOT a Leap Year.\n", year);
   } else {
        printf("%d is NOT a Leap Year.\n", year);
   }
    return 0;
}
