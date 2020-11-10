/*16. Write a C program to read an 
amount (integer value) and break the amount
 into smallest possible number of bank notes.
Test Data :
Input the amount: 375 
Expected Output:
There are:
3 Note(s) of 100.00 
1 Note(s) of 50.00 
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00 
0 Note(s) of 2.00
0 Note(s) of 1.00*/

#include<stdio.h>


int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,m;
printf("Input the amount : ");
scanf("%d",&a);
b=a/100;
printf("%d Note(s) of 100\n",b);

c=a%100;
d=(a%100)/50;
printf("%d Note(s) of 50\n",d);


e=(a%100)%50;
f=((a%100)%50)/20;
printf("%d Note(s) of 20\n",f);


i=(((a%100)%50)%20)/10;

printf("%d Note(s) of 10\n",i);



g=((a%100)%50)%20;
h=((((a%100)%50)%20)%10)/5;
printf("%d Note(s) of 5\n",h);

j=(((a%100)%50)%20)%5;
k=((((a%100)%50)%20)%5)/2;
printf("%d Note(s) of 2\n",k);
	
	
l=((((a%100)%50)%20)%5)%2;	
m=(((((a%100)%50)%20)%5)%2)/1;
printf("%d Note(s) of 1\n",m);	
	
	
			
	
	return 0;
}
