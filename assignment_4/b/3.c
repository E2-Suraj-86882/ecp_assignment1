#include<stdio.h>
float gcd_(int,int);
int main()
{
  float n1,n2,GCD;
  printf("Enter number 1: ");
  scanf("%f",&n1);
  printf("Enter number 2: ");
  scanf("%f",&n2);

  GCD=gcd_(n1,n2);
  printf("GCD of %.2f and %.2f: %.2f\n",n1,n2,GCD);
  return 0;
}

float gcd_(int n1,int n2)
{
   float res;
   res=n1%n2;
   if(res==0)
     return n2;
   else
     gcd_(n2,res);
}
