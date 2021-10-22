#include <stdio.h>

int main(void)
{
    FILE* fp; // fp is a pointer to struct FILE
              //STUDENT* s; int *p;
    FILE* fp1;
    char ch;
    char s1[100] = "COVID - 19";
    char s2[100];

    int i; float j;

    fp = fopen("C:\\Tools\\CSE115.txt", "r");

    if (fp==NULL) {
        printf("File operation failed!");
        return -1;
    }

    // perform operations
    fscanf(fp, "%d %f %s %s", &i, &j, s1, s2);
    printf("%d %f %s %s", i, j, s1, s2);

    fclose(fp);
    return 0;
}
