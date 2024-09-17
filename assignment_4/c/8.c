#include<stdio.h>
void swap(int*,int*);
int main()
{
  int n1,n2;
  printf("Enter two values: ");
  scanf("%d""%d",&n1,&n2);

  printf("Values before swaping:: n1= %d, n2= %d\n",n1,n2);
  swap(&n1,&n2);
  printf("Values after swaping:: n1= %d, n2= %d\n",n1,n2);

  return 0;
}

void swap(int *num1,int *num2)
{
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}
