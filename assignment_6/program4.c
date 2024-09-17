#include<stdio.h>
#include<string.h>
void rm_ch_str2(char *str1,char *str2);

int main()
{
  char str1[100];
  char str2[100];
  printf("Enter the string1: ");
  scanf("%*c%[^\n]s",str1);
  printf("Enter the string2: ");
  scanf("%*c%[^\n]s",str2);
  rm_ch_str2(str1,str2);
  return 0;
}

void rm_ch_str2(char *str1,char *str2)
{
  int i,j,length1,length2,c;
  length1=strlen(str1);

  for(j=0;j<length1;j++)
  {
    i=0,c=0;
	length2=strlen(str2);
    while(i<length2)
  	{
      if(str2[i]!=str1[j])  
	     str2[c++]=str2[i];
	  i++;
  	}
  }
  str2[c]='\0';
  printf("%s\n",str2);
}
