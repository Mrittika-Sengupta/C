#define r 3
#define c 3
int main(void)
{
    int a[r][c] = { {4,7,9},
                    {3,6,8},
                    {1,2,3}
                  };

   int i,j,sum=0;
   for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                sum=sum+a[i][j];
        }
   }
        printf("%d", sum);



    return 0;
}
