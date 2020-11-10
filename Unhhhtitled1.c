
#include <stdio.h>

int main()
{
    int num1, num2;

    /* Input two numbers from user */
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /* If num1 is maximum */
    if(num1 > num2)
    {
        printf("%d is maximum", num1);
    }

    /* If num2 is maximum */
    else if(num2 > num1)
    {
        printf("%d is maximum", num2);
    }



    return 0;
}
