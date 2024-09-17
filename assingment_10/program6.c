//Assignment 10.Q6]Write a function to swap two numbers using XOR operation. 

#include<stdio.h>
void swap(int a, int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap :n1= %d ,n2= %d\n",a,b);

}
int main(void)
{
	int n1,n2;
	printf("Enter num1 =");
	scanf("%d",&n1);
	printf("enter num2 =");
	scanf("%d",&n2);
	printf("before swap :n1= %d ,n2= %d \n",n1,n2);
	swap(n1,n2);

	return 0; 
}
