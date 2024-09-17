#include<stdio.h>
int main()
{
  int year;
  printf("Enter the year: ");
  scanf("%d",&year);

  if((year%4==0 && year%100!=0) || year%400==0)
     printf("%d year is leap year and has 366 days\n",year);
  else
     printf("%d year is not a leap year and has 365 days\n",year);

  
  return 0;
}
