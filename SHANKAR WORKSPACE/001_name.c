//program displaying name,DOB,mobile number

#include<stdio.h>
main()
{
  char name[50];
  int mobileno[50],dob;
 	
  
  printf("enter your name");
  scanf("%s",&name);
  printf("enter your DOB");
  scanf("%d",&dob);
  printf("enter your mobileno");
  scanf("%d",&mobileno);
  
  printf("your details are %s,%d,%d",name,dob,mobileno);
  getch();
}
  
  
