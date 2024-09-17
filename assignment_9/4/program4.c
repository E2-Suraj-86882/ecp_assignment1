#include<stdio.h>
#include"header.h"

void read_file(FILE*);
void write_file(FILE*,FILE*);
int main(int argc, char *argv[])
{
   int i;
   FILE *fr=fopen(argv[1],"r");
   FILE *fw=fopen(argv[2],"w");
   
   read_file(fr);
   write_file(fw,fr);
   fclose(fr);
   fclose(fw);
}
