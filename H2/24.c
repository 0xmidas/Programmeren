#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define   NCALLS    50   /* number of fct calls */

int main(void)
{
   int    i, val, diff;
   int    more = 0;
   int    less = 0;
   int    thresh = RAND_MAX / 2;

   srand(time(NULL));
   printf("\nTEST: %d calls to rand()\n\n", NCALLS);
   for (i = 0; i < NCALLS; ++i) {
      val = rand();
      if (val > thresh) {
         more++;
      } else {
         less++;
      }
      diff = more - less;
      printf("More: %i, Less: %i, Difference: %i\n", more, less, diff);
   }


   return 0;
}