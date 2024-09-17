#include<stdio.h>
#include<string.h>

int my_atoi(char *str);
int main()
{
  char str[100];
  printf("Enter the String: ");
  scanf("%[^\n]s",str);

  int c=my_atoi(str);
  if(c != -1)
    printf("Numeric equivalent : %d\n",c);
  return 0;
}

int my_atoi(char *str)
{
  int len,i=0,rem=0,num=0,flag=0;
  len=strlen(str);
  
  while(i<len)
  {
    if(str[i]>=48 && str[i]<=57)
	{
	  rem=str[i]-48;
	  num=num*10+rem;
	  i++;
	}
	else
	{
	  flag=1;
	  break;
	}
  }
  if(flag==1)
  {
      printf("Input string contains non digits charcters\n");
	  return -1;
  }
  else 
    return num;
}
