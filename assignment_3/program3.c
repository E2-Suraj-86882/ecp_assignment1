//ASSIGNMENT 3:Q3]Write a program to accept a number and

/*a. Calculate sum of digits of integer

#include<stdio.h>
int main()
{
int sum=0,num=9362;
while(num!=0)
{
sum+=num%10;
num/=10;
}
printf("%d\n",sum);


return 0;
}*/

//------------------------------------------------------------------------

//b. Reverse the number
/*
#include<stdio.h>
int main()
{
int rev=0,num=9362;
int temp=num;
while(temp!=0)
{
rev=rev*10+temp%10;
temp/=10;
}
printf("%d = %d \n",num,rev);

return 0;
}*/
//---------------------------------------------------------------------

//c. Check whether given number is numeric palindrome or not
/*
#include<stdio.h>
int main()
{
int sum=0,num,temp,rev;
printf("Enter a number :");
scanf("%d",&num);
temp=num;
while(temp>0)
{
sum=sum*10+temp%10;
temp/=10;
}
if(num==sum)
	printf("%d = is a numeric palindrome \n",num);
else
	printf("%d = is not a numeric palindrome \n",num);

return 0;
}*/
//--------------------------------------------------------------------------

//d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number then the number is called as Armstrong number)

#include<stdio.h>
int main()
{
int res=0,num,rem,temp;
printf("enter number :");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rem=temp%10;
res+=rem*rem*rem;
temp /=10;
}
if(res==num)
	printf("%d = is an Armstrong number\n",num);
else 
	printf("%d = is not an Armstrong number\n",num);


return 0;
}

