/*15. Write a C program to calculate the distance between the two points. Go to the editor
Test Data :
Input x1: 25 
Input y1: 15 
Input x2: 35 
Input y2: 10 
Expected Output:
Distance between the said points: 11.1803*/

#include<stdio.h>
#include<math.h>
int main()
{

float a,b,c,d,k,l;	
printf("Input x1 : ");
scanf("%f",&a);	

printf("Input y1 : ");
scanf("%f",&b);	
	
printf("Input x2 : ");
scanf("%f",&c);	
	
printf("Input y2 : ");
scanf("%f",&d);	
	
k=(a-c)*(a-c)+(b-d)*(b-d);
	
l=sqrt(k);
printf("Distance between the said points: %.4f",l);	
	
	
	
	return 0;
}
