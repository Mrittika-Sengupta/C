#include <stdio.h>


int main(){
    int row,colum;
    printf("Input Row: ");
    scanf("%d",&row);
    printf("Input Column: ");
    scanf("%d",&colum);
    char letter[row][colum];
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            printf("Type The %dX%dTh Index: ",(i+1),(j+1));
            scanf("%ch",&letter[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            printf(" %ch",letter[i][j]);
        }
    }

}
