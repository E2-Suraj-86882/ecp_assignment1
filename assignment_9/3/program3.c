#include<stdio.h>
void read_file(FILE*);
void write_file(FILE*,FILE*);

int main()
{
    FILE *fr=fopen("India.txt","r");
    FILE *fw=fopen("chotalia.txt","w");
    read_file(fr);
	write_file(fw,fr);
	fclose(fr);
	fclose(fw);
}
