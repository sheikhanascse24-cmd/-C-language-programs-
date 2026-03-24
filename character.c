#include<stdio.h>
int main (){
    char ch ;
    printf("please enter element : ");
    scanf ("%c",&ch);
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){
        printf("Entered element is a Alphabet ");
    }
    else {
        printf("Entered element id NOT a Alphabet ");

    }
}