#include <stdio.h>

int isPrime(int n)
{
    int i,count=0;
    for( i=1 ; i<=n ; i=i+1 ){
        if (n>1 && n%i==0){
            count=count+1;
        }
    }
    if (count==2){
        return 1;
    }else{
        return 0;
    }
}

int main(void)
{
    int n,result;
    printf("Enter a number : ");
    scanf("%d",&n);

    result=isPrime(n);

    if (result==1){
        printf("%d is a prime number.\n",n);
    } else {
        printf("%d is not a prime number.\n",n);
    }
    return 0;
}
