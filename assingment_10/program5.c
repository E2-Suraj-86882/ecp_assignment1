#include<stdio.h>
void charc_xor(char ch);

int main()
{
  int ch;
  printf("Enter the ASCII value: ");
  scanf("%d",&ch);

  charc_xor(ch);
  return 0;
}

void charc_xor(char ch)
{
   char xor;
   if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
   {
      xor=(ch ^ 32);
	  printf("xor = %c\n",xor);
   }
}
