#include<stdio.h>
float avg(float a, float b);

int main () {
    float a,b,c;
    printf("Enter any two number:");
    scanf("%f %f" , &a ,&b);
    c=avg(a,b);
    printf("Avg=%.2f" ,c);
}
    float avg (float a, float b){
        float result;
        result =(a+b)/2;
        return result;
    }


