#include<stdio.h>

int main()
{
  char ch;
  FILE *fp=fopen("India.txt","r");
  
  while((ch=fgetc(fp))!=EOF)
      printf("%c",ch);

  fclose(fp);
}
