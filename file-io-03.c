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
    ch = fgetc(fp);
    while (!feof(fp)) {
        printf("%c", ch);
        ch = fgetc(fp);
    }
    printf("\n...now using fgets()...\n");
    rewind(fp);
    fseek(fp, 10, SEEK_CUR); // SEEK_SET, SEEK_CUR SEEK_END
    while (!feof(fp)) {
        fgets(s1, 80, fp);
        printf("%s pos: %d\n", s1, ftell(fp));
    }

    fclose(fp);
    return 0;
}
