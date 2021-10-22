#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Nsu";  //65 <=N <=90   'N' 's' 'u' '\0'
    char s2[30], s3[30] = "Nsu";  //97    'N' 's' 'u' '\0'

    printf("Enter name: ");
   // gets(s1);

    int len = strlen(s1);

    //strncpy(s2,s1,3); strncat(s3,s1,2);

    int k = strcmp(s3,s1); //s3>s1 => 1, s3==s1 => 0 , s3<s1 => -1

    printf("%d %d\n", len, k);

    //printf("Name: ");
    //puts(test);
    // printf("%s", name);
    //Function to display string.
    return 0;
}
