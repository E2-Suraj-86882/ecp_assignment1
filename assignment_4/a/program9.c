#include<stdio.h>
void prime_num(int);
void num_range(int);
int main()
{
 int num;
 printf("Enter the number: ");
 scanf("%d",&num);

 prime_num(num);
 num_range(num);
 return 0;
}

void prime_num(int num)
{
  int flag;

  for(int i=2;i<=num/2;i++)
  {
    flag=0;
    if(num % i==0)
	{
	  flag=1;
	  break;
    }
  }
  if(flag==0)
     printf("%d number will be prime number\n",num);
  else
     printf("%d number not a prime number\n",num); 
}

void num_range(int num)
{
  int flag;
  printf("Prime numbers: \t");
 for(int c=2;c<=num;c++)
 {
 	for(int i=2;i<=c/2;i++)
  	{	
    	flag=0;
    	if(c % i==0)
		{
	  		flag=1;
	  		break;
    	}
  	}
  	if(flag==0)
    	 printf("%d\t",c);
  }
}
