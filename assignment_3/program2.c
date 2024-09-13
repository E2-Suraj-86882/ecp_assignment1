//ASSIGNMENT 3:Q2]Write a program to print table of given number.
/*input: 9
Output:
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 5 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90 */

#include<stdio.h>
int main(void)
{
	int num=9;
	
	int temp=1;
	while(temp<=10)
	{  
		printf("%d * %d = %d \n",num,temp,num * temp);
		
		++temp;
		}
printf("\n");

	return 0;
}
