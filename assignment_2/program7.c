#include<stdio.h>
int main()
{
 int year;
 printf("Enter the year: ");
 scanf("%d",&year);

 ((year%4==0 && year%100!=0) || year%400==0)?printf("leap year %d\n",year):printf("Non-leap year %d\n",year);
 return 0;
}
