#include<stdio.h>
int main (){
    int n , remainder,reverse=0 , org ;
    printf("enter your number :");
    scanf("%d",&n);
    org = n ;

while(n!=0){
      remainder = n % 10 ;
     reverse = reverse*10 + remainder ;
     n = n / 10 ;
   }
if(reverse == org)
     printf ("entered number is a palinbrome");
 
else
      printf("the number is NOT a palibrome");
 
 return 0 ;
}