//PROGRAM FOR ADDING AND SQUARING THE GIVEN NUMBERS..

#include<stdio.h>
int main()
{   
    int a,b,c;
    
    printf("enter the numbers that you want you square");
    scanf("%d%d",&a,&b);
    
    c=((a+b)*(a+b));
    
    
    printf("sqaure of the given nums are..:%d",c);
    getch();
}
