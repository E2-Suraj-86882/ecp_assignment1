#include<stdio.h>
void fibonacci_series(int n1,int n2,int terms);

int main()
{
  int n1,n2,terms;
  printf("Number of terms: ");
  scanf("%d",&terms);
  fibonacci_series(n1,n2,terms);
  return 0;
}

void fibonacci_series(int n1,int n2,int terms)
{  
   int res;
   n1=0;
   n2=1;
   printf("fibonacci series:\t");
   for(int i=0;i<=terms;i++)
   {
     res=n1+n2;
	 printf("%d\t",res);
	 n1=n2;
	 n2=res;
   }
   printf("\n");
}
