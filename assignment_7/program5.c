#include<stdio.h>
void accept_arr(char *str[]);
void print_arr(char *str[]);

int main()
{
  char *str[5];
  accept_arr(str);
  print_arr(str);
  return 0;
}

void accept_arr(char *str[])
{
   printf("Enter the 5 names: \n");
   for(int i=0;i < 5;i++)
   {
     scanf("%*c%s",str[i]);
   }
}

void print_arr(char *str[])
{
   for(int i=0;i < 5;i++)
   {
     printf("%s\n",str[i]);
   }
}
