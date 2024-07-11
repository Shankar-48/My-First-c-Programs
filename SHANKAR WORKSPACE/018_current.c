//PROGRAM FOR DISPLAYING TOTAL ELECTRICITY BILL FOR 2 MONTHS..

#include<stdio.h>
int main()
{  
    int a,b;
    float rpu,c;
    
    a=b=c=0;
    rpu=7.85;
    
    printf("enter this month current reading in units");
    scanf("%d",&a);
    printf("enter last month current reading in units");
    scanf("%d",&b);
    
    c=(a+b)*rpu;
    
    printf("the total electricity bill is %f",c);
    
    getch();
}    
    
