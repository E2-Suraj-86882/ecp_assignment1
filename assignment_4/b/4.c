#include<stdio.h>
int fibon_series(int,int,int);
int count=1;
int main()
{
   int n1=0,n2=1,iter,term;
   printf("Enter the last iteration number: ");
   scanf("%d",&iter);
   
   term=fibon_series(n1,n2,iter);
   printf("%d th term of fibonacci series: %d\n",iter,term);
   return 0;
}

int fibon_series(int n1,int n2,int iter)
{
   int res= n1+n2;
   if(count==iter)
      return res;
   else
      count++;
      return fibon_series(n2,res,iter);
}
