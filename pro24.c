/*24. Write a C program that reads two integers and checks if they are multiplied or not. Go to the editor
Test Data :
Input the first number: 5 
Input the second number: 15
Expected Output:
Multiplied! */


#include<stdio.h>

int main()
{
	int a,b;
	printf("Input the first num : ");
	scanf("%d",&a);
	printf("Input the srcond num : ");
	scanf("%d",&b);
	if(b%a==0)
	{
		printf("Multiplied!\n");
	}
	else 
	{
	printf(" Not Multiplied\n ");	
	}
	
	
	
	return 0;
}
