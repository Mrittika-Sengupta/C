#include<stdio.h>

int isPerfect(int num)
{
    int i=1,sum=0;
    while(i<num){
        if(num%i==0){
            sum=sum+i;
        }
        i=i+1;
    }
    return(sum);
}


int main()
{
    int n,x;
    printf("Enter a number : ");
    scanf("%d",&n);

    x=isPerfect(n);

    if (x == n){
        printf("The given number %d is a perfect number.\n",n);
    }else{
        printf("The given number %d is not a perfect number.\n",n);
    }
    return 0;
}


