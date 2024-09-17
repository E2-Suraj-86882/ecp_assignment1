#include<stdio.h>
void print_ch(char,int);

int main()
{
  char ch;
  int num;
  printf("Enter the chracter: ");
  scanf("%c",&ch);
  printf("Enter the number: ");
  scanf("%d",&num);

  for(int i=0;i<=num;i++)
  {
     print_ch(ch,num);
  }
  printf("\n");
  return 0;
}

void print_ch(char ch,int num)
{
  printf("%c",ch);
}
