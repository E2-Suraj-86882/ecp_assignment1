#include<stdio.h>
int cal_power(int,int,int);
int main()
{
  int base,power,exp,count=1;
  printf("Enter the base: ");
  scanf("%d",&base);
  printf("Enter the power: ");
  scanf("%d",&power);

  exp=cal_power(base,power,count);
  printf("%d raise to %d : %d",base,power,exp);
  return 0;
}

int cal_power(int base,int power,int count)
{ 
  if(count==power)
      return base;
  else
  {
     count++;
     return base*cal_power(base,power,count);
  }
}
