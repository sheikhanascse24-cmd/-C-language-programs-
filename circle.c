#include<stdio.h>
int main(){
    int radius ;
    float pi = 3.14 , area , circumfrence ;
    printf("enter the radius : ");
    scanf ("%d",&radius);
    area = pi*radius*radius;
    printf("area of circle is : %f",area);
    circumfrence = 2*pi*radius;
    printf("\n circumfrence of circle is:%f",circumfrence);

    return 0 ;
    
}