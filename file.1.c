#include <stdio.h>

struct vari
{
    char name[10];
    int age;
};

int main()
{
    struct vari v;
    FILE *p, *l;

    p=fopen("sructFile.txt","w");
    printf("Enter name");
    scanf("%s",v.name);
    printf("Enter age");
    scanf("%d", &v.age);

    fprintf(p, "%s%d", v.name,v.age);
    fclose(p);
l=fopen("sructFile.txt","r");
    do
    {
        fscanf(l,"%s%d",v.name,&v.age);
        printf("%s%d\n", v.name,v.age);
    }while(!feof(l));

    return 0;


}
