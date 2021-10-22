 #include <stdio.h>
 #define r 4
 #define c 3
 int main (){
 int i,j,n,sum=0;
 int a[r][c]={{5,9,7},{8,12,6},{3,0,2},{4,1,9}};
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("[%d]",a[i][j]);
    }
     printf("\n");
  }
   // calculatiing sum of columns
     for(j=0;j<c;j++){
        sum=0;
        for(i=0;i<r;i++){
            sum=sum+a[i][j];
        }
           printf("sum of column %d is %d\n",j+1,sum);
        }
     }

