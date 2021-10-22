#include <stdio.h>
int main(){
    char name[50];
    int id;
    char project_name[20];

    FILE *fptr;
    fptr = fopen("file.txt", "w");
    printf("Enter a name: ");
    fgets(name,50,stdin);
    fflush(stdin);
    fprintf(fptr,"%s",name);
    printf("Enter id: ");
    scanf("%d",&id);
    fflush(stdin);
    fprintf(fptr,"%d\n", id);
    printf("Enter project name: ");
    fgets(project_name,20,stdin);
    fprintf(fptr,"%s\n",project_name);
    fclose(fptr);
    return 0;
}
