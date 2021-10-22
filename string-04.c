#include <stdio.h>
#include <string.h>

int strsize(char *s)
{
    int i=0;
    while (s[i]!='\0') ++i; // 'N' 'S' 'U' '\0'
    return i;
}

char* strcopy(char d[], char s[])
{
    int i;
    for (i=0; s[i]!='\0'; i++) d[i] = s[i];
    d[i]='\0';
    return d; // &d[0]
}

char* strUppercase(char s[])
{
    int i;
    for (i=0; s[i]!='\0'; i++) {
        if (s[i]>='a' && s[i]<='z') s[i] = s[i] - 32;
    }
    return s; // &d[0]
}

int main()
{
    char name[30];
    char test[30];

    printf("Enter name: ");
    gets(name);
    strcopy(test,name);

    int k = strsize(name);

    printf("%d %s\n", k, test);

    return 0;
}
