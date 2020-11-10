#include <stdio.h>

#define HEIGHT 168

int main(void)
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) != EOF) {
        if (a > HEIGHT && b > HEIGHT && c > HEIGHT)
            printf ("NO CRASH\n");
        else if (a <= HEIGHT)
            printf ("CRASH %d\n",a);
        else if (b <= HEIGHT)
            printf ("CRASH %d\n",b);
        else if (c <= HEIGHT)
            printf ("CRASH %d\n",c);
    }

    return 0;
}
