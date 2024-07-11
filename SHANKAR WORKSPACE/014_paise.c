//PROGRAM FOR DISPLAYING AMOUNT GIVEN RUPEES AS PAISE....

#include<stdio.h>
int main()
{   
    int rupee,paise;
    
    printf("Enter the amount in rupees");
    scanf("%d",&rupee);
    
    paise=rupee*100;
    
    printf("Entered above amount in paise is:%d",paise);
    
    getch();
}    
    
