//ASSIGNMENT 3:Q1]Write a program to accept a character and a number, and print the character number times.

#include<stdio.h>
int main(void)
{
	char ch;
	int num;
	printf("enter character :");
	scanf("%c",&ch);

	printf("enter number :");
	scanf("%d",&num);
	int temp=0;
	while(temp<=num)
	{
		printf("%c",ch);
		temp++;
	}
printf("\n");





	return 0;
}
