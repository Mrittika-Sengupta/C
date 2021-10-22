#include <stdio.h>
#include <string.h>

struct Player {
    char name[80];
    int age;
    char country[32];
    int ranking;
};

int main (void)
{
    int n;

    printf("Enter the number of player: ");
    scanf("%d", &n);

    struct Player plist[n];
    char name[64];
    int i, k, c;

    printf("Enter the information of the players: ");
    for(i=0;i<n;i++) {
       scanf("%s %d %s %d", plist[i].name, &plist[i].age, plist[i].country, &plist[i].ranking);
    }
fflush(stdin);
    printf("Enter the name of a player: ");
    gets(name);

    k = -1;
    for(i=1;i<n;i++) {
        c = strcmp(plist[i].name, name);
        if (c==0) {k = i; break;}
    }
    if (k == -1) printf("Not Found\n");
    else printf("%d %s %d\n",plist[k].age, plist[k].country, plist[k].ranking);
    return 0;
}
