#include <stdio.h>
#include <string.h>

#define d 5

struct Student { // 64 + 4 + 4 + 16
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
    // dynamic memory allocation

    // 1. Declare pointer variable

    float* marks;
    int* list;
    struct Student *stud;

    float marks1[35]; // array declaration, static memory allocation


    // 2. you take the number of elements in the array
    int n;
    printf("How many students are there: ");
    scanf("%d",&n);

    // 3. allocate memory using function stdlib.h

    marks = (float *) malloc(n*sizeof(float));
    list = (int *) malloc(n*sizeof(int));
    stud = (struct Student *) malloc(n*sizeof(struct Student));

    printf("%d\n", n*sizeof(struct Student));

    // 4. you need to verify whether the allocation was successful or NOT

    if (stud==NULL) {
        printf("Memory allocation failed!!!");
        exit(-1); // return -1;
    }

    // 5. work or write code using the array
    // treat the pointer var as an array
    // marks[0] ----- marks[200]

    // input marks
    // output grades

    // 6. deallocate or free the memory
    free(marks);
    free(list);
    free(stud);

    return 0;
}
