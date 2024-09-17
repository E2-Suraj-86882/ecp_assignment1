#include<stdio.h>
void check_parity(int *num);

int main()
{
  int num;
  printf("Enter the number in decimal: ");
  scanf("%d",&num);

  check_parity(&num);
}

void check_parity(int *n)
{
  if((*n & 128) == 0)
     printf("Number having even parity!!\n");
  else
  {
     *n=(*n & 128);
     printf("Modified number: %d\n",*n);
  }
}
