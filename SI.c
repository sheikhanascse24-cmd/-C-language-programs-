#include<stdio.h>

float simpleintrest (float principal , float rate , float time ) {
    float SI ;
    SI = (principal*rate*time)/100;
    return SI ; 
}



int main (){
    float SI , principal , rate , time ;
    printf("enter principal :");
    scanf("%f",&principal);
     
    printf("enter rate :",&rate );
    scanf("%f",&rate );

    printf("enter time :" );
    scanf("%f",&time);

    SI = simpleintrest(principal,rate ,time );

 printf("simple intrest is %.2f ",SI);

 return 0 ;
}
 
