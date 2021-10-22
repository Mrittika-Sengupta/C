#include <stdio.h>
#include <string.h>

struct Student {
    char name[64];
    int roll_num;
    float cgpa;
    char phone_num[16];
};

union IdentityInfo {
    char NID[20];
    char passportno[20];
    char BRN[20];
    char drivinglic[20];
    char nsuid[20];
};

int main()
{
    return 0;
}
