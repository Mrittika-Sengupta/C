#include <stdio.h>
#include <string.h>

struct Address {
  char address_line_1[100];
  char address_line_2[100];
  char city[40];
  char zipcode[5];
} a, b;  // global variables

struct Address p =  {   "Apt-1A, House - 25, Road - 3",
                        "Sector - 4, Uttara",
                        "Dhaka", "1230"
                    }; // global variables;
int i; // global variable

int main(void)
{
    struct Address x, y; // local variables
    int j; // is a local variable of function main()
    int n = 5;
    float f;

    struct Student s1 = {"Tasdid", 123, 3.54, "019 1235 6790"};
    struct Student s2;

    printf("%s %d %f %s\n", s1.name, s1.roll_num, s1.cgpa, s1.phone_num);

    return 0;
}

int test()
{
    int k; // local variable of function test()
}
