#include<stdio.h>
int main ()
{

    int i ,n , reminder;
    printf("Enter a number\n");
    scanf("%d" , &n);

    for(i=1;i<=n ; i=i+1)
    {
        reminder=i%2;
        if(reminder==0)
        {
        printf("%d  " , i);
    }
    }
    return 0;
}
