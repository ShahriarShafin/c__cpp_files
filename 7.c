/*
7. Write a C program that read 4 numbers and sum of all even values between them.
Sample Input:
Input the first number: 11
Input the second number: 17
Input the third number: 13
Input the fourth number: 12
Expected Output:
Sum of all even values: 12
*/
#include<stdio.h>
int main()
{
    int first_num,second_num,third_num,fourth_num;
    int sum=0;

    printf("Input the first number: ");
    scanf("%d",&first_num);
    printf("Input the second number: ");
    scanf("%d",&second_num);
    printf("Input the third number: ");
    scanf("%d",&third_num);
    printf("Input the fourth number: ");
    scanf("%d",&fourth_num);


    if(first_num%2==0)
    {
        sum=sum+first_num;
    }
    if(second_num%2==0)
    {
        sum=sum+second_num;
    }
    if(third_num%2==0)
    {
        sum=sum+third_num;
    }
    if(fourth_num%2==0)

    {
        sum=sum+fourth_num;
    }

    printf("\nSum of all even values: %d\n",sum);


    return 0;
}
