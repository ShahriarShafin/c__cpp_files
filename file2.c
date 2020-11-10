#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;


   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr);

   return 0;
}
