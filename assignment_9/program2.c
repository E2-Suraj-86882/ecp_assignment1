#include<stdio.h>

void read_file(FILE*);
void write_file(FILE *fw,FILE *fr);

int main()
{
  FILE *fr=fopen("India.txt","r");

  FILE *fw=fopen("sachin.txt","w+");


  read_file(fr);
  write_file(fw,fr);
  fclose(fr);
  fclose(fw);
}
void read_file(FILE *fr)
{
  char ch;
  fr=fopen("India.txt","r");
  while((ch=fgetc(fr))!=EOF)
     printf("%c",ch);
}

void write_file(FILE *fw,FILE *fr)
{ 
   char ch;
   fw=fopen("sachin.txt","w");
   while((ch=fgetc(fr))!=EOF)
      fputc(ch,fw);
}
