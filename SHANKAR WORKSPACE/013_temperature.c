//PROGRAM FOR CONVERSION OF FAHRENHEIT TO CELCIUS IN DEGREES..

#include<stdio.h>
main()
{
	float tf,tc;
	tf=tc=0;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&tf);
	tc=(tf-32)*5/9;	
	printf("Temperatue in Celsius: %f DEGREES",tc);
	getch();
	return 0;
	getch();
}
