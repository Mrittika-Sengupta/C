#include <stdio.h>

int main(void)
{
    FILE* fp; // fp is a pointer to struct FILE
              //STUDENT* s; int *p;
    FILE* fp1;
    char ch;
    char s[100] = "COVID - 19";

    fp = fopen("C:\\Tools\\CSE115.txt", "w");
    fp1 = fopen("C:\\Tools\\CSE215.txt", "r");

    if (fp==NULL) {
        printf("File operation failed!");
        return -1;
    }

    // perform operations
    // fprintf(fp, "%s", "North South University\n");
    // fprintf(fp, "%s", "Bashundhara, Dhaka, Bangladesh\n");

    ch = 'A';

    fputc(ch,fp);
    fputs(s,fp);

    fclose(fp);
    return 0;
}
