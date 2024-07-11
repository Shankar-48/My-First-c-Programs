//PROGRAM FOR CALCULATING AVERAGE OF 5 SUBJECTS..

#include <stdio.h>
main()
{
	int e,s,m,p,c,tot;
	float avg;
	e=s=m=p=c=tot=avg=0;
	printf("Enter English marks:");
	scanf("%d",&e);
	printf("Enter Sanskrit marks:");
	scanf("%d",&s);
	printf("Enter Maths marks:");
	scanf("%d",&m);
	printf("Enter Physics marks: ");
	scanf("%d",&p);
	printf("Enter Chemistry marks: ");
	scanf("%d",&c);
	tot=e+s+m+p+c;
	avg=tot/5.0;
	printf("Total : %d",tot);
	printf("\nAverage : %.2f",avg);
	getch();
	return 0;
}
