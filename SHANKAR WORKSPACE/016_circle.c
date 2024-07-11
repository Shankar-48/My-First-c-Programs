//PROGRAM OF FINDING AREA OF CIRCLE...

#include<stdio.h>
int main()
{   
    float area;
    int radius;
    const float pi=(3.14);
    
    area=radius=0;
    
    printf("enter the Radius of the circle");
    scanf("%d",&radius);
    
    area=(pi*radius*radius);
    
    printf("Area of the given circle of Radius %d is %f",radius,area);
    
    getch();
}    
    
