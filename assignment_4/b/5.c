#include<stdio.h>
void binary_form(int);

int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  
  binary_form(num);
  return 0;
}

void binary_form(int num)
{
   if(num/2!=0)
   {
     num/2;
   }
}
