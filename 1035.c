#include<stdio.h>
int main()
{
    float a,b,c,R1,R2;
    scanf("%f%f%f",&a,&b,&c);

    R1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    R2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);

    return 0;
}
