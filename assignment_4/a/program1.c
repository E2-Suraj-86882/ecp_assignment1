#include<stdio.h>
int num_fac(int);
int main()
{
  int num,fac;
  printf("Enter the number you want: ");
  scanf("%d",&num);

  fac=num_fac(num);
  printf("factorial of %d : %d\n",num,fac);
  return 0;
}

int num_fac(int a)
{
  if(a==0)
    return 1;
  else
    return a*num_fac(a-1);
}
