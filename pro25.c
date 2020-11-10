/*25. Write a C program that reads an integer between 1 and 12 and print the month of the year in English. Go to the editor
Test Data :
Input a number between 1 to 12 to get the month name: 8 
Expected Output:
August */


#include<stdio.h>

int main()
{
int a;
printf("Input a number between 1 to 12 to get the month name : ");
scanf("%d",&a);	
if(a==1)
{
printf("January ");
}

else if(a==2)
{
printf(" February ");
}

else if(a==3)

{printf("March");
}

else if(a==4)
{printf("April");
}

else if(a==5)
{printf(" May");
}

else if(a==6)
{printf("June ");
}

else if(a==7)
{printf("July ");
}

else if(a==8)
{printf("August");
}

else if(a==9)
{printf("September ");
}

else if(a==10)
{printf("October ");
}

else if(a==11)
{printf("November ");
}

else if(a==12)
{printf(" December");
}

else 
{printf("Invalid Input");
}
	
	return 0;
}
