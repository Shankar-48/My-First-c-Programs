//PROGRAM FOR DISPLAYING LOWER CASE LETTER FOR GIVEN UPPER CASE LETTER..

#include<stdio.h>
int main()
{ 
    char letter;
    int lwr;
    
    printf("enter any uppercase letter from A to Z..:");
    scanf("%c",&letter);
    
    lwr=letter+32;
    
    printf("the lower case letter of given input is %c is %c", letter,lwr);
    getch();
}    
