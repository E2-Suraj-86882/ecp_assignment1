#include<stdio.h>
#include<string.h>

int main(int argc, char*argv[])
{
  int i,j;
  char s[20];
  for(i=0;i<argc;i++)
  {
    for(j=i+1;j<argc;j++)
	{
	  if(strcmp(argv[i],argv[j])>0)
	  {
	    strcpy(s,argv[i]);
		strcpy(argv[i],argv[j]);
		strcpy(argv[j],s);
	  }
	}
  }

  for(i=0;i<argc;i++)
  {
    printf("Str[%d]: %s\n",i,argv[i]);
  }
  return 0;
}
