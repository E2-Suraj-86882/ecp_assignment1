//ASSIGNMENT 3:Q12]Write a program to find factorial of given number.

#include<stdio.h>
int main()
{
int num,fact=1,f=1;
printf("enter num :");
scanf("%d",&num);

while(f<=num)
{

fact *=f;
f++;
}
printf("The Factorial of %d is : %d\n",num,fact);
return 0;
}
