#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("1. January Has 30 Days.\n");
            break;
        case 2:
            printf("2. February Has 28days. Becomes 29 on Leap year.\n");
            break;
        case 3:
            printf("3. March Has 31 Days.\n");
            break;
        case 4:
            printf("4. April Has 30 Days.\n");
            break;
        case 5:
            printf("5. May Has 31 Days.\n");
            break;
        case 6:
            printf("6. June Has 30 Days.\n");
            break;
        case 7:
            printf("7. July Has 31 Days.\n");
            break;
        case 8:
            printf("8. August Has 31 Days.\n");
            break;
        case 9:
            printf("9. September Has 30 Days.\n");
            break;
        case 10:
            printf("10. October Has 31 Days.\n");
            break;
        case 11:
            printf("11. November Has 30 Days.\n");
            break;
        case 12:
            printf("12. December Has 31 Days.\n");
            break;

        default:
            printf("Invalid input! Please enter month number between 1-12.\n\n");
    }

    return 0;
}
