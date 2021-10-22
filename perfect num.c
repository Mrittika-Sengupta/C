#include<stdio.h>
int isperfectNum(int n){
    int i=1,sum=0;
while (i<n){
    int rem;
    rem=n%i;
    if(rem==0){

        sum=sum+i;

    }
    i++;
   }
   if(sum==n){
    return 1;

   }
   else {
        return 0;
   }

}
int main()
{  int i;
    printf("Enter the number :");
    scanf("%d",&i);
    printf("%d",isperfectNum(i));
    return 0;
}
