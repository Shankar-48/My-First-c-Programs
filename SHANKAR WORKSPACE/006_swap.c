//PROGRAM FOR SWAPPNG THE VALUES OF AND B..

#include<stdio.h>
main()
{
    int A,B;

    printf("enter the values of A and B");
    scanf("%d%d",&A,&B);

    A=A+B;
    B=A-B;
    A=A-B;

    printf("after swapping :-");
    printf("\nthe value of A is:%d",A);
    printf("\nthe value of B is:%d",B);
    getch();

    return 0;
}
     
