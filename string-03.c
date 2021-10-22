#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Nsu";  //65 <=N <=90   'N' 's' 'u' '\0'
    char s2[30], s3[30] = "Nsu";  //97    'N' 's' 'u' '\0'

    printf("Enter name: ");
    gets(s1);
    strlwr(s1);
    strrev(s1);
    printf("%s", s1);
    //Function to display string.
    return 0;
}
