//i. Create an Array of Students of size three and take user input to fill the array.
//ii. Now find the student with the least CGPA and display his or hers Name, ID and CGPA. */

#include <stdio.h>

struct Student {
    char Name[80],ID[14];
    float CGPA;
};

int main (void)
{
    struct Student stud[3];
    int i,k;

    for(i=0;i<3;i++) {
       scanf("%s %s %f",stud[i].Name, stud[i].ID, &stud[i].CGPA);
    }

    k=0;
    for(i=1;i<3;i++) {
        if (stud[i].CGPA<stud[k].CGPA)
            k = i;
    }
    printf("%s %s %f\n",stud[k].Name,stud[k].ID,stud[k].CGPA);
    return 0;
}
