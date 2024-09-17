#include<stdio.h>
void func(int*,int*,int*,int*);
int main()
{
  int n1,n2,prod,sum;
  printf("Enter the number 1: ");
  scanf("%d",&n1);
  printf("Enter the number 2: ");
  scanf("%d",&n2);

  func(&n1,&n2,&prod,&sum);
  printf("%d * %d = %d\n",n1,n2,prod);
  printf("%d + %d = %d\n",n1,n2,sum);
  return 0;
}

void func(int *num1,int *num2,int *ptr,int *btr)
{
  *ptr=*num1 * *num2;
  *btr=*num1 + *num2;
}
