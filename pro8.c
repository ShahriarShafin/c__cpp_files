 /*Write a C program to convert specified days into years,
  weeks and days. Go to the editor
Note: Ignore leap year. 

Test Data :
Number of days : 1329 
Expected Output :
Years: 3 
Weeks: 33 
Days: 3 */


#include<stdio.h>
int main()
{
	int D,y,w,d;
printf("Number of days :");	
scanf("%d",&D);
y=D/365;
printf("Years :%d\n",y);
w=(D%365)/7;
printf("Weeks :%d\n",w);
d=(D%365)%7;
printf("Days :%d\n",d);
	
		
	return 0;
	
}
