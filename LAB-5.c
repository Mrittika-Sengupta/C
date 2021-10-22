#include <stdio.h>
int main()
{
    int math, english, ict;
    float average;

    printf("Enter marks for Math: ");
    scanf("%d", &math);
    printf("Enter marks for English: ");
    scanf("%d", &english);
    printf("Enter marks for ICT: ");
    scanf("%d", &ict);

    average=(math+english+ict)/3.0;

    if(average>=80)
    {
        printf("Grade is: A+");
    }
    else if(average>=70)
    {
        printf("Grade is: A");
    }
    else if(average>= 65)
    {
        printf("Grade is: A-");
    }
    else if(average>= 60)
    {
        printf("Grade is: B");
    }
    else if(average>= 50)
    {
        printf("Grade is: C");
    }
    else if(average>= 40)
    {
        printf("Grade is: D");
    }
    else if(average>= 33)
    {
        printf("Grade is: E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
