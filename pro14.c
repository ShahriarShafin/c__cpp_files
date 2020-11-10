/*14. Write a C program to calculate a bike’s
 average consumption from the given total 
 distance (integer value) traveled (in km)
 and spent fuel (in liters, 
float number – 2 decimal point).

Test Data :
Input total distance in km: 350 
Input total fuel spent in liters: 5 
Expected Output:
Average consumption (km/lt) 70.000 */

#include<stdio.h>
int main()
{

int a;
float b;	
printf("Input total distance in km: ");	
scanf("%d",&a);
printf("Input total fuel spent in liters: ");	
scanf("%f",&b);
printf("Average consumption (km/lt) %.2f",a/b);
		
			
	return 0;
}
