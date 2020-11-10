#include <stdio.h>

int main()
{
    int x,y;

   x=4;
   y=2;


    if(x < y)
    {
        printf("%d is the maximum of given numbers", y);
    }
    else if(y < x)
    {
        printf("%d is the maximum of given numbers", x);
    }

     else if(y == x)
    {
        printf("Both are equal");
    }

    else
    {

    }



    return 0;
}
