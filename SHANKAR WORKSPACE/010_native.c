//PROGRAM FOR DISPLAYING NAME,GENDER AND NATIVE PLACE..

#include<stdio.h>
int main()
{
    char name,native,gender;

    printf("enter your full name:");
    scanf("%s",&name);


    printf("\nenter your gender(M/F)");
    fflush(stdin);
    scanf("%c",gender);
    
    printf("enter your native:");
    fflush(stdin);
    scanf("%s",native);

    printf("your deatails are:%s-%c-%s",name,gender,native);
    getch();


    return 0;
}
