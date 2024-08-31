//ASSIGNMENT 2:Q1

#include<stdio.h>
int main()
{
int n1,n2;
float div;
printf("num1 :");
scanf("%d",&n1);
printf("num2 :");
scanf("%d",&n2);
if(n2==0)
{
printf("Division by zero\n");
}
else
{
div=n1/n2;
printf("%.2f\n",div);
}


return 0;
}
