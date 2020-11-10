/*13. Write a C program that accepts three
integers and find the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35 */

#include<stdio.h>
int main()
{

 int a,b,c;
	printf("Input the first integer:");
	scanf("%d",&a);
	printf("Input the second integer:");
	scanf("%d",&b);
	printf("Input the third integer:");
	scanf("%d",&c);

	if(a>b && a>c)
	{
printf("Maximum value of three integers: %d",a);
	}

	else if(b>a && b>c)
	{
printf("Maximum value of three integers: %d",b);
	}


	else if(c>b && c>a)
	{
printf("Maximum value of three integers: %d",c);
	}



	return 0;
}
