
#include <stdio.h>
int main()
{
    int a[100],b[100],c,i;
    scanf("%d\n",&c);

     for(i=1;i<=c;i++)
     {
         scanf("%d %d",&a[i],&b[i]);
     }
     for(i=1;i<=c;i++)
     {
         if(a[i]<b[i])
         printf("<\n");
         else if(a[i]>b[i])
         printf(">\n");
         else if(a[i]==b[i])
         printf("=\n");
     }
     return 0;
}
