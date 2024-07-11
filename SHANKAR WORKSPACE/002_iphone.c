//PROGRAM DISPLAYING BILL OF APPLE MOBILE AND ITS CASE..

#include<stdio.h>
main()
{
    int iphone,ccase,total_bill;
     
    iphone=ccase=total_bill=0;
     
    printf("enter the price of iphone and case");
    scanf("%d%d",&iphone,&ccase);
    
     
    total_bill=iphone+ccase;
     
    printf("amount to be paid is %d",total_bill);
    getch();
     
    return 0;
     
}     
