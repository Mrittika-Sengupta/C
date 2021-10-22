//(a) Using library function
/*#include<stdio.h>
int main()
{
char a[32],b[32];
int n;
printf("Enter the string:");
scanf("%s",a);
strcpy(b,a);
strrev(b);
n=strcmp(a,b);
if(n==0)
{
    printf("String is a Palindrome");

}
else
{
     printf("String is not a Palindrome");
}
getch ();
} */
// Without using library function
#include<stdio.h>
int main()
{
    char a[15];
    int i,j,l=0;
    printf("Enter a string: ");
    scanf("%s" , a);
    for (i=0;a[i]!='\0';i++)
        l++;

    i=0;
    j=l-1;
    while(i<j)
    {
        if(a[i]!=a[j])
            break;
        i++;
        j--;
    }
    if(i>=j)
    {
         printf("String is a Palindrome");
    }
    else
{
     printf("String is not a Palindrome");
}
}


