#include<stdio.h>
int main()
{

    int a[2][2],b[2][2],c[2][2],i,j,k[2];

    printf("x=|a  b|\n");
    printf("  |c  d|\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {

            scanf("%d",&a[i][j]);
        }
    }

    printf("y=|e  f|\n");
    printf("  |g  h|\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("x=|a  b|   y=|e  f|\n");
    printf("  |    |  +  |    |\n");
    printf("  |c  d|     |g  h|\n");

    for(i=0; i<2; i++)
    {
        printf("\n");

        for(j=0; j<2; j++)
        {
            printf("\t");
            printf("%d",c[i][j]=a[i][j]+b[i][j]);

        }

    }

    printf("\n");


    return 0;
}
