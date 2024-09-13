//ASSIGNMENT 3:Q6]Write a program to accept a number and print all factors excluding the number

#include<stdio.h>
int main()
{
int num,fact,i=1;
printf("enter num :");
scanf("%d",&num);
printf("All factores =");
while(i<num)
{
if(num%i==0)
	printf("%d ",i);
i++;
}
printf("\n");
return 0;
}
