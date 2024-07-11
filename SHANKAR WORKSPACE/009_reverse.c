//PROGRAM FOR PRINTING REVERSE OF GIVEN CHARECTERS..

#include<stdio.h>
int main()
{
    char a,b,c;

    printf("enter 3 charecters of your choice");
    scanf("%c%c%c",&a,&b,&c);

    printf("the reverse of ABC is:%c%c%C",c,b,a);
    getch();

    return 0;
}
