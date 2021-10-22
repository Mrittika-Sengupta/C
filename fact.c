#include<stdio.h>
int main()
{
    int n1,n2,i,j,n;
    scanf("%d %d" , &n1,& n2);
    for(i=n1; i<=n2;i++){
            for(j=1;j<=i;j++){
                    if(i%j==0)
                    printf("%d" ,j);
            }



            printf("%d" ,n);
            }





    return 0;
}
