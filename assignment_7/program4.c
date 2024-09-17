#include<stdio.h>
#include<string.h>

void accept_str(char(*)[20]);
void print_str(char(*)[20]);
void sort_str(char(*)[20],char*);

int row,col;
int main()
{
  char str[5][20];
  char s[20];
  
  accept_str(str);
  print_str(str);
  sort_str(str,s);
  print_str(str);

 return 0;
}

void accept_str(char (*ptr)[20])
{
  int i;
  for(i=0;i<5;i++)
  {
	   printf("\nEnter Name %d: ",i);
	   gets(ptr[i]);
  }
}

void print_str(char (*ptr)[20])
{ 
  int i;
  for(i=0;i<5;i++)
  {
	   printf("Name %d :%s\n",i,ptr[i]);
  }
}


void sort_str(char (*ptr)[20],char *s)
{ 
  int i,j;
  for(i=0;i<5;i++)
  {
    for(j=i+1;j<5;j++)
    {
	 if(strcmp(ptr[i],ptr[j])>0)
	 {
	   strcpy(s,ptr[i]);
	   strcpy(ptr[i],ptr[j]);
	   strcpy(ptr[j],s);
	 }
	}
  }
}

