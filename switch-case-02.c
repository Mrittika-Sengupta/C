#include <stdio.h>

int main (void)
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    switch (letter) {
    case 'a':
    case 'A':
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'u': case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Other symbol\n");
        break;
    }
    return 0;
}
