//ASSIGNMENT 3:Q7]Write a program to accept a number and print unique pairs of numbers such that multiplication of the pair is given number

#include<stdio.h>
int main()
{
int num,fact,i=1;
printf("enter num :");
scanf("%d",&num);

while(i<num)
{
if(num%i==0)
	printf("%d * %d = %d\n",i,num/i,num);
i++;
}
printf("\n");
return 0;
}
