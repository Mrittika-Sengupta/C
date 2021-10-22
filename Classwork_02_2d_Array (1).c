#include <stdio.h>


int main(){
    int row,colum;
    printf("Input Row: ");
    scanf("%d",&row);
    printf("Input Column: ");
    scanf("%d",&colum);
    float letter[row][colum];
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            printf("Type The %dX%dTh Index: ",(i+1),(j+1));
            scanf("%f",&letter[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            printf(" %2f",letter[i][j]);
        }
        printf("\n");
    }

}

