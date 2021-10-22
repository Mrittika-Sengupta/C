#include <stdio.h>
#include <string.h>

#define d 5

struct Student {
    char name[64];
    int roll;
    float cgpa;
    char phone_num[16];
};

typedef struct bank_acc_tag {
    int acc_no;
    char acc_name[64];
    double balance;
    char open_date[16];
    char type[16];
} Account;

typedef struct Student STUDENT;
typedef int Number;

void showStudent(struct Student s) // STUDENT s
{
    printf("Name: %s, Roll: %d, CGPA: %f\n", s.name, s.roll, s.cgpa);
    return;
}

int main()
{
    struct Student s1;
    struct Student slist[3];
    STUDENT s3 = {"Rahim", 123, 3.56};
    struct Student *p = &s3;
    int i = 5, k, j;
    int *q = &i;

    //printf("%d\n", j);
    printf("%d, %s\n", i, s3.name);
    printf("%d, %s, %s\n", *q, (*p).name, p->name); // *(q+i) q[i]

    return 0;
}
