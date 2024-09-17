#include<stdio.h>

void read_file(FILE *fr)
{
  char ch;
  fr=fopen("India.txt","r");
  while((ch=fgetc(fr))!=EOF)
    printf("%c",ch);
}
