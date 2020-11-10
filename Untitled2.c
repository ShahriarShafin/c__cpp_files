#include <stdio.h>

int main()
{
    char favoriteDairyProduct[30];

    scanf("%s",favoriteDairyProduct);

    if(favoriteDairyProduct == "cheese")
    {
        printf("You like cheese too!");
    }
    else
    {
        printf("I like cheese more.");
    }

    return 0;
}
