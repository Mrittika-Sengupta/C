#include<stdio.h>
typedef  struct
{
    int real ,img;
} complex ;
complex add (complex ,complex);
void main ()
complex c1, c2, c3;
printf("Enter 1st complex number:");
scanf("%d %d" , &c1.real , &c1.img);
printf("Enter 2nd complex number:");
scanf("%d %d" , &c2.real , &c2.img);
 c3= add(c1, c2)
 printf("result %d + %di/n , c3.real , c3.img);
 }

complex add (complex x,complex y)
{
    complex z;
    z.real=x.real +y.real
    z.img=ximg+y.img
}
