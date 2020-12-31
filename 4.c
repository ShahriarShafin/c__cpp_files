/*
4. Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.
Sample Input: 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/
#include<stdio.h>
int main()
{
    int input,years,weeks,days,extraDays;
    scanf("%d",&input);
    years=input/365;
    extraDays=input%365;
    weeks=extraDays/7;
    days=extraDays%7;
    printf("Years: %d\n",years);
    printf("Weeks: %d\n",weeks);
    printf("Days: %d\n",days);

    return 0;
}
