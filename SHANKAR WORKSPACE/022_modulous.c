//finding modulous of two numbers..

#include<stdio.h>
int main()
{
    int a,b,c;
    a=b=c=0;
    
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    
    c=a%b;
    
    printf("the modulous of the given two numbers is %d",c);
    getch();
}    
