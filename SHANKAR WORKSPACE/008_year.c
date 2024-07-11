//PROGRAM FOR CONVERSION DAY TO YEARS,MONTHS AND DAYS..

#include<stdio.h>
main()
{
    int year;
    int mon;
    int week;
    int days;
    int input;

    printf("enter the no:of days");
    scanf("%d",&input);

    year=input/365;
    mon=(input%365)/30;
    week=((input%365)%30)/7;
    days=((input%365)%30)%7;

    printf("given days in years is %d year,\n%d months,\n%d weeks and %ddays ",year,mon,week,days);
    getch();
    

    return 0;

}
