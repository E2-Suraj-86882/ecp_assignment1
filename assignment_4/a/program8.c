#include<stdio.h>
int fibonacci_series(int n1,int n2,int terms);

int main()
{
  int n1,n2,terms,fnum;
  printf("Number of terms: ");
  scanf("%d",&terms);
  fnum=fibonacci_series(n1,n2,terms);
  printf("%d th term of fibonacci series: %d\n",terms,fnum);
  return 0;
}

int fibonacci_series(int n1,int n2,int terms)
{  
   int res;
   n1=0;
   n2=1;
   for(int i=0;i<=terms;i++)
   {
     res=n1+n2;
	 n1=n2;
	 n2=res;
   }
   return res;
}
