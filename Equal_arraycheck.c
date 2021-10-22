#include <stdio.h>


int main(){
    char input1[100];
    char input2[100];
    int length=0,check=0;
    printf("Type The 1st String: ");
    gets(input1);
    printf("Type The 2nd String: ");
    gets(input2);

    for(int i=0;input1[i]!='\0';i++){
        length++;
    }
    printf("The Length is %d\n",length);
    for(int j=0;j<length;j++){
        if(input1[j]==input2[j]){
            check++;
        }
    }
    if(check==length){
        printf("Equal");
    }else{
        printf("Not Equal");
    }
}
