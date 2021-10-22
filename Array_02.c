#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    char name2[100];
    char name3[100];
    printf("Type Name 1: ");
    gets(name);
    printf("Type Name 2: ");
    gets(name2);
    printf("Type Name 3: ");
    gets(name3);

    strcat(strcat(name,name2),name3);
    printf("\%s",name);
    printf("\n%s",name2);
    printf("\n%s",name3);
}
