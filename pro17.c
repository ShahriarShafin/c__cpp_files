/*17. Write a C program to convert a 
given integer (in seconds) to hours, 
minutes and seconds. Go to the editor
Test Data :
Input seconds: 25300 
Expected Output:
There are:
H:M:S - 7:1:40 */

#include<stdio.h>

int main()
{
int a,b,c,d;	
printf("Input seconds :");
scanf("%d",&a);
b=a/3600;

c=(a%3600)/60;

d=(a%3600)%60;

printf("H:M:S - %d:%d:%d",b,c,d);
	
		
	return main;
}
