// ASSIGNMENT 2:Q4

#include<stdio.h>
int main()
{
int n1,n2,max;
printf("Enter Num1 : ");
scanf("%d",&n1);

printf("Enter Num2 : ");
scanf("%d",&n2);
if(n1>n2)
	max=n1;
else
	max=n2;
printf("MAX = %d\n",max);
return 0;
}
