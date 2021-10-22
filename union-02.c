#include <stdio.h>
#include <string.h>

struct Identity {
    char type; //tag
    union {
        char NID[20];
        char PNO[20];
        char BRN[20];
        char DLN[20];
    };
};

int main()
{
    struct Identity id;

    id.type = 'n';
    strcpy(id.NID, "376237678236");

    id.type = 'b';
    strcpy(id.BRN, "199028282828557");

    if (id.type == 'p') printf("Passport No: %s", id.PNO);
    else if (id.type=='n') printf("NID Card No: %s", id.NID);
    else if (id.type=='b') printf("BRN Card No: %s", id.BRN);

    return 0;
}
