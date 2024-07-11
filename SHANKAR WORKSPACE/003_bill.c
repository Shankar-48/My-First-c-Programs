//PROGRAM FOR BILLING TOTAL AMOUNT AND BALANCE TO BE RETURNED..

#include<stdio.h>
int main()
{
    int prod_1,prod_2,prod_3,Total_bill,paid,balance;

    prod_1=prod_2=prod_3=Total_bill=paid=balance=0;

    printf("\n-----------------------------");
    printf("\n  -->price of the item<--");
    printf("\n-----------------------------\n\n");

    printf("price of item 1..:");
    scanf("%d",&prod_1);

    printf("price of item 2..:");
    scanf("%d",&prod_2);

    printf("price of item 3..:");
    scanf("%d",&prod_3);

    Total_bill=prod_1+prod_2+prod_3;

    printf("\n-----------------------------");
    printf("\nTotal bill to be paid:%d",Total_bill);
    printf("\n-----------------------------\n\n");

    printf("amount given by the customer..:");
    scanf("%d",&paid);

    balance=paid-Total_bill;

    printf("balance to be returned..:%d",balance);
    getch();

}
