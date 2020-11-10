#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,sum1,i,sum2=1,sum3=1,sum4,sum5,sum6=1,nCx;

    printf("please enter n ≥ r ≥ 0");
    //prblm 1
    printf("x= ");
    scanf("%d",&x);
    printf("n= ");
    scanf("%d",&n);
    sum1=pow(x,n);
    printf("x^n= %d\n",sum1);

    //prblm 2
    for(i=1; i<=n; i++)
    {
        sum2=sum2*i;
    }
    printf("n!= %d\n",sum2);
    //prblm 3


for(i=1; i<=x; i++)
    {
        sum3=sum3*i;
    }
    printf("x!= %d\n",sum3);

sum4=sum2/sum3;
printf("n!/x! =%d\n",sum4);

sum5=n-x;

for(i=1; i<=sum5; i++)
    {
        sum6=sum6*i;
    }
    printf("n!= %d\n",sum6);







    return 0;
}

