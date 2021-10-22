#include <stdio.h>
#include <string.h>

char* strreverse(char s[]) // NSU  => USN dhaka => akahd
{
    int i=0, j, len; char t;
    //length
    while (s[i]!='\0') i++;
    len  = i;
    //reverse
    i =0; j = len-1;
    while (i<j) {
        t = s[i]; s[i] = s[j]; s[j] = t;
        i++; j--;
    }
    return s; // &d[0]
}

int main()
{
    char name[30] = "dhaka";
    char test[30];

    gets(name);
    strcpy(test,name);
    strreverse(test);
    if (strcmp(name,test)==0) printf("%s is a Palindrome\n", name);
    else printf("%s is NOT a Palindrome\n", name);

    return 0;
}
