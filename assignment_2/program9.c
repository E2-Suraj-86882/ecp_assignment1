#include<stdio.h>
int main()
{
 int mon,year;
 printf("Enter the year: ");
 scanf("%d",&year); 
 printf("Enter the month: ");
 scanf("%d",&mon); 

 if(mon<=7)
 {
   if(mon==2)
   {
     if((year%4==0 && year%100!=0)||year%400==0)
	   printf("month %d has 29 days in %d year\n",mon,year);
	 else
	   printf("month %d has 28 days in %d year\n",mon,year);
   }
   else if(mon%2!=0)
     printf("month %d has 31 days in %d year\n",mon,year);
   else 
     printf("month %d has 30 days in %d year\n",mon,year);
 }
 if(mon>=7)
 {
   if(mon%2!=0)
     printf("month %d has 30 days in %d year\n",mon,year);
   else 
     printf("month %d has 31 days in %d year\n",mon,year);
 }
 return 0;
}
