 #include <stdio.h>
 int main(){
 int i,j,c,r,b[10][10];
 printf("enter row and column size: ");
 scanf("%d%d",&r,&c);
int a[r][c];
printf("enter elements in index\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%dx%d index: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

}
 printf("Array: \n");
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d",a[i][j]);
    }
   printf("\n");
 }

printf("Transposed Array: \n");
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       b[j][i]=a[i][j];
    }

 }
  for(i=0;i<c;i++){
    for(j=0;j<r;j++){
      printf("%d",b[i][j]);
    }
     printf("\n");
    }


 }
