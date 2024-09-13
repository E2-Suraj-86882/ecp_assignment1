//ASSIGNMENT 3:Q11]Write a program to find factorial of given number.

#include<stdio.h>
int main()
{
int num,fact=1,f;
printf("enter num :");
scanf("%d",&num);

for(f=1;f<=num;f++)
{

fact *=f;
}
printf("The Factorial of %d is : %d \n",num,fact);
return 0;
}
