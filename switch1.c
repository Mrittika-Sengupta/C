#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c" ,&ch);
    switch(ch)
    {


    case 'a':
    printf("a");
    break;

    case 'b':
    printf("b") ;
    break;

    case 'c':
    printf("c");
    break;

    default:
    printf("neither of them:");
    }
    return 0;
}
