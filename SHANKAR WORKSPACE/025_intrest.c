//FINNDING OUT SIMPLE INTREST BY THE GIVEN INFORMATION;

#include<stdio.h>
int main()
{
    float t,i;
    int p,r;
    
    printf("enter the principle amount:");
    scanf("%d",&p);
    printf("enter the time in years:");
    scanf("%f",&t);
    printf("enter the rate of intrest:");
    scanf("%d",&r);
    
    i=(p*t*r)/100;
    
    printf("Intrest for the given amount is %f",i);
    getch();
} 
    
    
