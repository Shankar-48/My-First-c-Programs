//PROGRAM FOR FINDING MR.RAO'S GROSS AND NET SALARY..

#include<stdio.h>
int main()
{    
     int basic;
     float net,gross,allow,ded;
     net=gross=allow=ded=basic=0;
     
     
     printf("Enter Mr.Rao's basic salary");
     scanf("%d",&basic);
     
     allow=(0.2)*basic;
     ded=(0.05)*basic;
     gross=basic+allow;
     net=gross-ded;
     
     printf("Mr.Rao's Gross salary is %f",gross);
     getch();
     printf("\nMr.Rao's net salary is %f",net);
     
     getch();
}     
