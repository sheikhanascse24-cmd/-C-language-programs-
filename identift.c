#include <stdio.h>
int main (){
    char ch;
    printf("enter the element :");
    scanf("%c",&ch);
    if (ch >= 'A' && ch<='Z'){
        printf("entered element is uppercase letter\n ");
    }
    else if (ch >= 'a' && ch <= 'z' ){
        printf("entered element is lowercase letter\n  ");
    }
    else if ( ch >= '0' && ch <= '9'){
        printf ("entered element is a number\n ");
    }
    else{
        printf ("entered element is specail character\n");
    }
    return 0 ;
}  
