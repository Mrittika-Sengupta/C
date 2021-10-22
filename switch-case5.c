#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    switch ((num%2==0)&&(num%3==0))
    {
        case 1:
            printf("%d is divisible by both.\n", num);
        break;

        case 0:
            switch ((num%2==0)||(num%3==0))
            {
                case 1:
                    printf("%d is divisible by 2 or 3.\n", num);
                    break;
                case 0:
                    printf("%d is not divisible by 2 or 3.\n", num);
                    break;
            }
        break;
    }
    return 0;
}
