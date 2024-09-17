#include<stdio.h>
int func(int,int);
int num1,num2,prod,sum;

int main()
{
  printf("Enter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);

  sum=func(num1,num2);
  printf("%d * %d =%d\n",num1,num2,prod);
  printf("%d + %d =%d\n",num1,num2,sum);
  return 0;
}

int func(int num1,int num2)
{
   int *ptr=&prod;
   *ptr=num1*num2;
   return num1+num2;
}
