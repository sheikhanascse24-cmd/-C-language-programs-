#include<stdio.h>
int main(){
 int temp1 , temp2, num2 ,num1 , HCF ;
 printf("enter 2 numbers :");
 scanf("%d %d",&num1,&num2);
 temp1=num1;
 temp2=num2;
  while(temp2!=0) 

 {
        
   int remainder = temp1 % temp2;
    temp1=temp2;
    temp2=remainder;

  }

  HCF = temp1 ;

 
int LCM ;
  LCM = (num1*num2)/HCF;
  printf("HCF of the numbers %d and %d are = %d ", num1,num2,HCF);
  printf ("and the LCM is = %d",LCM);
  return 0;
}