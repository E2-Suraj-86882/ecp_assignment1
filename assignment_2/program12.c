#include<stdio.h>
int main()
{
  int year,mon;
  printf("Enter the year: ");
  scanf("%d",&year);
  printf("Enter the month: ");
  scanf("%d",&mon);

  switch(mon)
  {
    case 1: printf("Month %d has 31 days\n",mon);
	        break;
    case 2: if((year%4==0 && year%100!=0) || year%400==0)
			   printf("Month %d has 29 days\n",mon);
			else
			   printf("Month %d has 28 days\n",mon);
		    break;
    case 3: printf("Month %d has 31 days\n",mon);
	        break;
    case 4: printf("Month %d has 30 days\n",mon);
	        break;
    case 5: printf("Month %d has 31 days\n",mon);
	        break;
    case 6: printf("Month %d has 30 days\n",mon);
	        break;
    case 7: printf("Month %d has 31 days\n",mon);
	        break;
    case 8: printf("Month %d has 31 days\n",mon);
	        break;
    case 9: printf("Month %d has 30 days\n",mon);
	        break;
    case 10: printf("Month %d has 31 days\n",mon);
	        break;
    case 11: printf("Month %d has 30 days\n",mon);
	        break;
    case 12: printf("Month %d has 31 days\n",mon);
	        break;
	default:printf("Enter valid month number\n");
	        break;
  }
  return 0;
}
