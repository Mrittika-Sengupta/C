#include<stdio.h>
int stringLength(char* s);
int main()
{
    char str[20];
    int l;
    printf("Enter string\n ");
    gets(str);
    l=stringLength(str);
    printf("Length=%d" ,l);
    return 0;
}
int stringLength(char* s)
{

   int  l=0;
   while(*s!='\0')
   {
       l++;
       s++;
   }
   return l;

}


