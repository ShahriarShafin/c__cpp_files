
/*5. Write a C program to compute the perimeter and area
 of a rectangle with a height of 7 inches. 
and width of 5 inches. */
#include<stdio.h>
int main()
{
int h,w,p,a;
scanf("%d %d",&h,&w);
p=2*(w+h);
a=w*h;
printf("The perimeter of the rectangle = %d\n",p);

printf("Area of the rectangle = %d\n",a);	
	
	
	return 0;
}
