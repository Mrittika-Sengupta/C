#include<stdio.h>
int main()
{
    char opr;
    int a,b;
    printf("Enter an operator\n");
    scanf("%c" , &opr);
    printf("Enter two numbers\n");
    scanf("%d %d" , &a ,&b);

    switch (opr)
    {
        case '*':
        printf("Multipication=%d" , a*b);
        break;

        default:
        printf("wrong input");
        break;


    }











    return 0;
}
