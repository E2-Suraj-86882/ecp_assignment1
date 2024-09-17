#include<stdio.h>
#include<string.h>

void rm_char(char *str1);

int main()
{
  int size;
  printf("Size of string including terminating character: ");
  scanf("%d",&size);
  char str[size];
  printf("Enter the string: ");
  scanf("%*c%[^\n]s",str);
  rm_char(str);
  return 0;
}

void rm_char(char *str1)
{
  char ch;
  printf("Enter the character: ");
  scanf("%*c%c",&ch);
  int i = 0, j = 0;
    int length = strlen(str1);

   while(i < length)
   {
       if(str1[i] != ch)
          str1[j++] = str1[i];
       i++;
   }

  str1[j] = '\0';
  printf("%s\n",str1);
}
