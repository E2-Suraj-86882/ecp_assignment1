//Assingment10.Q2]Write a function to display given number in binary format.

#include<stdio.h>
void print_binary(char num)
{
	unsigned int mask=0x80000000;

	printf("%d :",num);
	while(mask)
	{
		if(num&mask)
			printf("1 ");
		else
			printf("0 ");

		mask=mask>>1;
	}
	printf("\n");
}

int main(void)
{
	int num;
	printf("Enter num :");
	scanf("%d",&num);

	print_binary(num);

	return 0; 
}
