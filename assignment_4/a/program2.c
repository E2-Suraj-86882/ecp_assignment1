#include<stdio.h>
int cal_pow(int,int);
int main()
{
  int num,base,pow,exp;
  printf("Enter the base: ");
  scanf("%d",&base);
  printf("Enter the pow: ");
  scanf("%d",&pow);

  exp=cal_pow(base,pow);
  printf("%d raise to %d : %d\n",base,pow,exp);

  return 0;
}


int cal_pow(int base,int pow)
{
   int exp=1;
   for(int i=1;i<=pow;i++)
   {
     exp=exp*base;
   }
   return exp;
}
