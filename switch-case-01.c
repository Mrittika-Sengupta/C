#include <stdio.h>

int main (void)
{
    int a = 5, b = 7;
    char optr;
    printf("Enter two number and an operator: ");
    scanf("%d %d %c", &a, &b, &optr);

    switch (optr) {
    case '+':
        printf("%d\n", a+b);
        break;
    case '-':printf("%d\n", a-b);
        break;
    case '*':printf("%d\n", a*b);
        break;
    case '/':printf("%d\n", a/b);
        break;
    default:
        printf("Invalid operation.\n");
        break;
    }
    return 0;
}
