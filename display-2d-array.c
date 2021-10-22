#include <stdio.h>
int main (){
int i,j,m,n,b,r,c;
printf("enter size of row and column: ");
scanf("%d %d",&r,&c);
int a[r][c];
printf("enter elements in index\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%dx%d index: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
      for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("[%d]",a[i][j]);
    }
      printf("\n");
      }




}
