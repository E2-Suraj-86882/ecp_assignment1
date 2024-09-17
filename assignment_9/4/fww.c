#include<stdio.h>

void write_file(FILE *fw,FILE *fr)
{
  char ch;
  fw=fopen(argv[2],"w");

  while((ch=fgetc(fr))!=EOF)
     fputc(ch,fw);
}
