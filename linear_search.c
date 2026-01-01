#include<stdio.h>
int main () {
    int   n ,arr[100],i ,a,found=0;
    printf("enter no of element of  array");
    scanf("%d",&n);
    printf("enter you array");
    for (i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }

    printf("enter element for search");
    scanf("%d",&a);
    
       
    
    for (i=0;i<n;i++){
      if(arr[i]==a){
         printf("element is found at position%d",i+1);
          found=1;
         break;
      }
    }
    if(!found){
        printf("element is not present ");
    }
    return 0;
}