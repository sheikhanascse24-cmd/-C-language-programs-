#include <stdio.h>
int main (){
    int num ;
    printf("enter any number :");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("entered number is an even number .");

    }
    else{
        printf("entered number is an odd number .");
    }
    return 0;
}