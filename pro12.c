/*11. Write a C program that accepts two item’s
 weight (floating points' values ) and number of 
 purchase (floating points' values) and 
 calculate the average value of the items.
Test Data :
Weight - Item1: 15
No. of item1: 5 
Weight - Item2: 25 
No. of item2: 4 
Expected Output:
Average Value = 19.444444*/

#include<stdio.h>
int main()
{
	char a[10];
	float b;
	printf("Input the Emproyees ID(Max.10 chars): ");
	scanf("%s",&a);
	printf("Input the working hrs: ");
    scanf("%f",&b);
    printf("Salary amount/hr:15000\n");
    printf("Employees ID = %s\n",a);
    printf("Salary = U$ %.2f\n",b*15000);
	
	
	
	return 0;
}

