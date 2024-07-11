//PROGRAM FOR CALCULATING FLYTIME FROM SINGAPORE TO HYD...

#include<stdio.h>
main()
{
    int flytime,tot_fly,q,r;

    printf("time taken to reach sgp from hyd in minutes:");
    scanf("%d",&flytime);

    q=flytime/60;
    r=flytime%60;

    printf("the total time take in hours and mins is:%d hours %d mins",q,r);
    getch();

    return 0;

}


