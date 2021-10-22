#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d" , &a);

        switch (a%=2)
{
        case 0:
        printf("Even");
        break ;

        case 1:
        printf("Odd");
        break ;

        default:
        printf("Wrong input");
        break;

    }






    return 0;
}
