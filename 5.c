/*
5. Write a C program that accepts two integers from the user and calculate the sum of the two
integers.
Sample Input:
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/
#include<stdio.h>
int main()
{

    int first_num,second_num,sum;

    printf("Input the first integer: ");
    scanf("%d",&first_num);
    printf("\nInput the second integer: ");
    scanf("%d",&second_num);

    sum=first_num+second_num;
    printf("\nSum of the above two integers = %d\n",sum);



    return 0;
}
