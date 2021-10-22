#include <stdio.h>
#include <string.h>

struct Student {
    char name[64];
    int roll_num;
    float cgpa;
    char phone_num[16];
};

struct Bank_Account {
    int acc_no;
    char acc_name[64];
    double balance;
    char open_date[16];
    char type[16];
};

int main()
{
    int n = 5;
    float f;

    struct Student s1 = {"Tasdid", 123, 3.54, "019 1235 6790"};
    struct Student s2;
    struct Student s3 = {"Jahir", 1639, 3.71, "0172838383"};

    struct Student s4[35];

    float a, marks[35];

    scanf("%s %d %f %s", s2.name, &s2.roll_num, &s2.cgpa, s2.phone_num); // &s2.name[0]
    printf("%s %d %f %s\n", s2.name, s2.roll_num, s2.cgpa, s2.phone_num);

    gets(s2.name);
    scanf("%d %f", &s2.roll_num, &s2.cgpa);
    gets(s2.phone_num);

    return 0;
}
