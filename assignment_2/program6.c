//ASSIGNMENT 2:Q6


#include<stdio.h>
#include<math.h>
int main()
{
int num,arm=0,rev=0,sum=0,rem,temp,count=0;
printf("Enter num : ");
scanf("%d",&num);
enum menu {EXIT,SUM,REV,PAL,ARM}ch;
printf("0.Exit\n");

printf("1.Sum of digit\n");
printf("2.Rev the num\n");
printf("3.check Palindrome\n");
printf("4.check Armstrong\n");
scanf("%d",&ch);
temp=num;
switch(ch)
{
	case EXIT:
			printf("Exit.....\n");
			break;
	case SUM: 
			while(temp !=0)
			{
				rem=temp%10;
				sum=sum+rem;
				temp /=10;
			}
			printf("Sum of %d =%d\n",num,sum);
			break;
	case REV: 
			while(temp!=0)
			{
				rem=temp%10;
				rev=rev*10+rem;
				temp=temp/10;
			}
			printf("REV %d =%d\n",num,rev);
			break;
	case PAL: 
			while(temp!=0)
			{
				rem=temp%10;
				rev=rev*10+rem;
				temp=temp/10;
			}
			if(num==rev)
				printf("Num  is palindrom ");
			else
				printf("num is not palindrom");
		//	printf("REV %d =%d\n",num,rev);
			break;
	case ARM:while(temp !=0)
					{
						count++;
						temp=temp/10;
					}
					printf("count %d=%d\n",num,count);
					temp=num;
			while(temp!=0)
					{
						rem=temp%10;
						arm=arm+pow(rem,count);
						temp=temp/10;
					}
			if(num==arm)
						printf("armstrong....\n");
					else
						printf("not armstrong\n");
				break;
	default : printf("invalid\n");
				break;
	}
return 0;
}
