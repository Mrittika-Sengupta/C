#include <stdio.h>
#include <string.h>

struct Student {
    char name[64];
    int roll;
    float cgpa;
    char phone_num[16];
};

int main()
{
    struct Student s1;
    struct Student slist[3];
    int i;

    for (i=0; i<3; i++) {
        scanf("%s %d %f", slist[i].name, &slist[i].roll, &slist[i].cgpa);
    }


    for (i=0; i<3; i++) {
        printf("Name: %s, Roll: %d, CGPA: %f\n", slist[i].name, slist[i].roll, slist[i].cgpa);
    }


    return 0;
}
