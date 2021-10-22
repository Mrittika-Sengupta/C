#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    char test[30];

    printf("Enter name: ");
    gets(name);
    // scanf("%s", name);
    //Function to read string from user.
    strcpy(test,name);

    printf("Name: ");
    puts(test);
    // printf("%s", name);
    //Function to display string.
    return 0;
}
