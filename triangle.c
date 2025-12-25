#include<stdio.h>
int main(){
    int height , base ;
    float area ;
    printf("enter height of triangle :");
    scanf("%d",&height);
    printf("enter base of triangle :");
    scanf("%d",&base);
    area = 0.5*base*height;
    printf("areaof triangle is : %f",area);
return 0 ;

}