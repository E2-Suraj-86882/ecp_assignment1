/*ASSIGNMENT 3:Q13]Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/

#include<stdio.h>
int main()
{
  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;

   printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 2; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
printf("\n");
return 0;
}
