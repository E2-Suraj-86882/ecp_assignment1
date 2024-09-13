//ASSIGNMENT 3:Q18] Write a program to print the tables of the numbers from 1 to 10.

#include<stdio.h>
int main()
{
	int n, i;
	for (int n=1; n<=10; n++)
	{
		for (int i=1; i<=10; i++)

			printf(" %d * %d = %d \n ",i,n,i * n);

		printf("\n");
	}

	return 0;
}
