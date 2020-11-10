/*18. Write a C program to convert a
given integer (in days) to years,
months and days, assumes that all
months have 30 days and all years 
have 365 days.

Test Data :
Input no. of days: 2535 
Expected Output:
6 Year(s) 
11 Month(s)
15 Day(s)*/

#include<stdio.h>
int main()
{
	
int a,b,c,d;
printf("Input no. of days : ");
scanf("%d",&a);

b=a/365;
printf("%d Year(s)\n",b);

c=(a%365)/30;
printf("%d Month(s)\n",c);

d=(a%365)%30;
printf("%d Day(s)\n",d);

	
	return 0;
}
