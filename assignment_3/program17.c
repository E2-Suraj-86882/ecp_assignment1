/*Assignment3.Q17]Print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * * */

#include <stdio.h>
int main() {
   int i, j, rows=5;

   for (i = 1; i <= rows; i++) {
      for (j = i; j <= rows+i;j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

