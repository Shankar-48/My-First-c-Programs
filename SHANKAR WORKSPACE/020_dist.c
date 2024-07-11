//PROGRAM FOR CONVERSION OF KILOMETERS INTO METERS..

#include<stdio.h>
int main()
{     
      int kdist,mdist;
      kdist=mdist=0;
      
      printf("total distance travelld from A to B(in km)");
      scanf("%d",&kdist);
      
      mdist=kdist*1000;
      
      printf("the total distance travelled from A to B is %d meters",mdist);
      
      getch();
}      

      
      
      
