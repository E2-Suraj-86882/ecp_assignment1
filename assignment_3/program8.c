//ASSIGNMENT 3:Q8]Write a program to accept a number and print its prime factors.

#include<stdio.h>
int main()
{
int num,i,prime;
printf("enter number :");
scanf("%d",&num);

i=2;
printf("%d = ",num);	
while(i<=num)
{
if(num%i==0){
	printf("%d * ",i);
	num /=i;}
else
	i++;
}
printf("\n");
return 0;
}
