//prints the ASCII value of each character in the string.

#include<stdio.h>
void printASCII(char*s);
int main()
{
    char str[20];
    printf("Enter string\n ");
    gets(str);
    printASCII(str);
    return 0;
}
void printASCII(char* s)
{
   printf("String with ASCII value\n ");
   while(*s!='\0')
   {
       printf("\n%c = %d" ,*s, *s);
       s++;
   }
}


