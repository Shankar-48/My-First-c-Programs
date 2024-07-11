//PROGRAM FOR DISPLAYING GROSS AND NET SALARY OF A PERSON..

#include <stdio.h>
int main()
{
	int bas;
	float HRA,DA,PF,gr,net;
	bas=HRA=DA=PF=gr=net=0;

	
	printf("Enter Basic Salary:");
	scanf("%d",&bas);
	
	HRA=(0.2)*bas;
	DA=(0.1)*bas;
	PF=(0.05)*bas;
	
	gr=bas+HRA+DA;
	net=gr-PF;
	
	printf("Gross salary of the employee:Rs%.2f/-",gr);
	printf("\nNet Salary of the employee:Rs%.2f/-",net);
	printf("\n");
	getch();

	return 0;
}
