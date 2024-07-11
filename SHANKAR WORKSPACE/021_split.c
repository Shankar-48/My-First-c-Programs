//PROGRAM FOR DIVIDING THE BILL AND TIP EQUALLY BETWEEN FRIENDS..

#include<stdio.h>
int main()
{   
    int bill,frnds;
    float final,tip;
    bill=tip=final=frnds=0;
    
    printf("Enter the total bill amount");
    scanf("%d",&bill);
    
    printf("enter the tip(5%% or 10%%)");
    scanf("%f",&tip);
    
    printf("enter the total no of friends");
    scanf("%d",&frnds); 
    
    final=(bill/frnds)+((tip/100)*bill)/frnds;
    
    printf("each one have to pay..:%f/-",final);
    
    getch();
}    
