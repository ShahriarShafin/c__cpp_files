/*
Write a C program to compute the perimeter and area of a circle with a user given radius
(double).
Sample Input: 6.0
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/
#include<stdio.h>
int main()
{

    float radious;
    float area,perimeter;
    float pie=3.1416;
    scanf("%f",&radious);
    area=pie*radious*radious;
    perimeter=2*pie*radious;
    printf("\nPerimeter of the Circle = %f inches",perimeter);
    printf("\nArea of the Circle = %f square inches\n",area);

    return 0;
}
