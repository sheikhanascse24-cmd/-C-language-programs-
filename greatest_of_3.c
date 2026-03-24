#include <stdio.h>
int main (){
    int num1 , num2 , num3 ;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    printf("enter third number :");
    scanf("%d",&num3);
    if(num1 >= num2 && num1 >= num3){
        printf("%d is greater then %d and %d",num1,num2,num3);
    }
    else if(num2 >= num3 && num2 >= num1 ){
        printf("%d is grester then %d and %d",num2,num3,num1);

    }
    else if (num3 >= num1 && num3 >= num2 ){
        printf("%d is greater then %d and %d ",num3, num2 ,num1);

    }
 return 0;
    
}