#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int   i, n;

   printf("\n%s\n%s",
      "Some randomly distributed integers will be printed.",
      "How many do you want to see?  ");
   scanf("%d", &n);
   while (++i <= n) {
      if (i % 10 == 0)
         putchar('\n');
      printf("%7d", rand());
   }
   printf("\n\n");
   return 0;
}