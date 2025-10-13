
#include<math.h>
#include<stdio.h>
int main (){
    double base , exp , result;
    printf("enter the base number :");
    scanf("%lf",&base );

    printf("enter the exponent :");
    scanf("%lf",&exp);
   
    result = pow(base,exp);

    printf("%lf^%lf=%lf",base , exp ,result);
    return 0 ;

}