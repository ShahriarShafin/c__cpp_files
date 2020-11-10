#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("a= \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("b= \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&b[i]);

    }


    for(i=0; i<5; i++)
    {
        printf("%d\t%d",a[i],b[i]);

    }




    return 0;
}
