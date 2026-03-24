#include<stdio.h>

int main (){
    int num1 , num2 , num3 ;
    printf("enter three numbers :");
    scanf("%d",&num1);
    scanf(" %d",&num2 );
    scanf(" %d", &num3);
    if(num1>=num2 && num1>=num3){
        printf("%d is the grestest number ",num1 );

    } 
    else if (num2>=num1 && num2>=num3){
        printf("%d is the greates number ",num2); 
    }
    else (num3>=num2 && num3>=num1);

        printf("%d is the grestest number ", num3);

    

    return 0;

}