#include<stdio.h>

int main()
{
   double spd,pspd,pdis=0,tdis=0,itime=0,ctime;
   long int hour;
   int min,sec;
   char c1,c2,c3;

   while(scanf("%ld%c%d%c%d%c",&hour,&c1,&min,&c2,&sec,&c3)!=EOF)
   {
      if(c3==' ')
      {
         scanf("%lf",&spd);
         ctime = (double)hour + (double)min/60 + (double)sec/3600;
         if(tdis!=0)
         {
            pdis = (double)pspd * (double)(ctime - itime);
         }

         itime = ctime;
         pspd = spd;
      }

      else
      {
         ctime = (double)hour + (double)min/60 + (double)sec/3600;

         tdis = (double)spd * (double)(ctime - itime);

         if(hour<10)
            printf("0");
         printf("%ld%c",hour,c1);

         if(min<10)
            printf("0");
         printf("%d%c",min,c2);

         if(sec<10)
            printf("0");
         printf("%d %.2lf km\n",sec,(tdis+pdis));
      }
   }
   return 0;
}
