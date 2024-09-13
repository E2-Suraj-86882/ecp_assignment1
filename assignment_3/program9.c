/*ASSIGNMENT 3:Q9]Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3*/ 

#include<stdio.h>
int main()
{
int n1,n2;
printf("enter two numbers : ");
scanf("%d %d",&n1,&n2);
printf("GCD of %d and %d is ",n1,n2);
while(n1!=n2)
{
if(n1 > n2)
	n1 -= n2;
else
	n2 -= n1;

printf("%d %% %d = %d\n ",n1,n2,n1);

}
printf("%d \n",n1);


return 0;
}
