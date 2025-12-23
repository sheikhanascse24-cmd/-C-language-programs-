#include<stdio.h>

int factorial(int number ){
 int fact = 1 ,  i  ;
    if (number < 0 ){
     printf("ERRER! Farctorial of negative number doesn't exist");
     return 0;
    }
    else 
    for (i=1 ; i<=number ; i++ ){
        fact*=i;
       
    }
    return fact ;
}

int main (){
    int num , fact  ;
 printf("enter number :");
 scanf("%d",&num );
 fact = factorial(num);
 printf("factorial is : %d",fact);
 return 0 ;

}