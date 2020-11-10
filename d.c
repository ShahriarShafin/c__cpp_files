#include<stdio.h>
#include<string.h>
int main()
{
    char s[6];
    int no=0;
    while(scanf("%s",s))
    {
        if(!strcmp(s,"*"))
        break;
        else if(!strcmp(s,"Hajj"))
        printf("Case %d: Hajj-e-Akbar\n",++no);
        else
        printf("Case %d: Hajj-e-Asghar\n",++no);
    }
    return 0;
}
