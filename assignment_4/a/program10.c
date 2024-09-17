#include<stdio.h>
int leap_ornot(int);
void mon_days(int);
int main()
{
 int year,ret;
 printf("Enter the year: ");
 scanf("%d",&year);

 ret=leap_ornot(year);
 mon_days(ret);
 return 0;
}

int leap_ornot(int year)
{
  if(year%400==0 || (year%4==0 && year%100!=0))
  {
    printf("Leap year: %d\n",year);
	return 1;
  }
  else
  {
      printf("Non-leap year: %d\n",year);
	  return 2;
  }
}

void mon_days(int ret)
{ 
  int mon;
  printf("Enter the month: ");
  scanf("%d",&mon);

  if(ret==2 && mon==2)
     printf("Month %d: 28 days",mon);
  else if(ret==1 && mon==2)
     printf("Month %d: 29 days",mon);
  else if(mon<=7)
  { 
     if(mon%2!=0)
	 {
	   printf("Month %d : 31 days",mon);
	 }
	 else
	   printf("Month %d : 30 days",mon);
  }
  else 
  { 
     if(mon%2==0)
	 {
	   printf("Month %d : 31 days",mon);
	 }
	 else
	   printf("Month %d : 30 days",mon);
  }
}
