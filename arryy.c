
#include<stdio.h>
int main()
{
   int a[2],b[2],i,sum[2];

   for(i=0;i<2;i++)
   {
   scanf("%d",&a[i]);
   }


for(i=0;i<2;i++)
   {
   scanf("%d",&b[i]);
   }


for(i=0;i<2;i++)
   {
   sum[i]=a[i]+b[i];
   }



for(i=0;i<2;i++)
   {
  printf("%d",sum[i]);
  printf("\t");

   }









    return 0;
}
