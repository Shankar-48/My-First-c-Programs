//PROGRAM FOR DISPLAYING SIZE OF THE GIVEN DATATYPES..

#include<stdio.h>
int main()
{  
    int roll;
    char name,gender;
    float height;
    
    printf("enter roll no");
    scanf("%d",&roll);
    
    printf("enter your name:");
    scanf("%s",&name);
    
    printf("enter your gender(M/F)");
    fflush(stdin);
    scanf("%c",&gender);
    
    printf("enter height");
    fflush(stdin);
    scanf("f",&height);
    
    printf("\nroll no ocuupies %d bytes",sizeof(roll));
    printf("\nname ocuupies %d bytes",sizeof(name));
    printf("\ngender ocuupies %d bytes",sizeof(gender));
    printf("\nheight ocuupies %d bytes",sizeof(height));
    
    getch();
    
    return 0;
}   
