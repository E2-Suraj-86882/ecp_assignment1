/*ASSIGNMENT 3:Q20]Write a program to display
 
 a. Prime numbers between 1 to 100 */
 

#include <stdio.h>
int main()

{
	int i, num, temp = 0; 
	printf("Enter any numb to Check for Prime: ");
	scanf("%d", &num);

	for (i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			temp++;
			break;
		}
	} 

	if (temp == 0 && num != 1)
	{
		printf("%d is a Prime number \n", num);
	}
	else
	{
		printf("%d is not a Prime number \n", num);
	}

	return 0;
}



// b. Armstrong Numbers between 1 to 500
/*
#include <stdio.h>
int main(){
int num,sum,count=1,r;
while (count<=500){
num=count;
sum=0;
while (num){
r=num%10;
sum=sum+r*r*r;
num=num/10;
}
if (count==sum){
printf("%d is an Armstrong number.\n",count);
}
count++;
}
return 0;
}*/
