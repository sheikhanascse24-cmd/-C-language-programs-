#include <stdio.h>
int main (){
  int day , month ,year;

  printf("enter the date : DD MM YYYY ");
    
  scanf("%d %d %d",&day,&month,&year);
  int leap = 0 ;
    if (year%4 == 0 && year%100 != 0 || year%400 != 0){
      leap = 1;
   }

    if (month < 1 || month> 12 ){
     printf("invalid ! date . month should be between 1 and 12 .");
     return 0;
   }
  int daysinmonth;
  if ( month == 2 ){
     daysinmonth = (leap) ? 29 : 28 ;
  } 
  else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
       daysinmonth = 31;
  }else{
     daysinmonth = 30;
   }
  if (day<1 || day>daysinmonth){   
     printf ("invalid ! days in month is invalid ");
   } else{
     printf("the date %d /%d/ %d is valid ", day,month ,year);
  }  

 return 0 ;

}