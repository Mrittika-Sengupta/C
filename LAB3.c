include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(ch >= 48 && ch <= 57)
    {
        printf("%c is digit.", ch);
    }
    else if(ch >= 65 && ch <= 90)
    {
        printf("%c is Uppercase.", ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("%c is Lowercase.", ch);
    }
    else
    {
        printf("%c is special character.", ch);
    }

    return 0;
