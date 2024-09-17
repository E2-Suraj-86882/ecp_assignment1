#include<stdio.h>
int menu(int *ch,int *num1,int *num2);
void* add_num(int*,int*,int*);
void* sub_num(int*,int*,int*);
void* mul_num(int*,int*,int*);
void* div_num(int*,int*,int*,int*);

int main()
{
  int choice,n1,n2,res,flag;
  while(menu(&choice,&n1,&n2)!=0)
  {
    flag=0;
    switch(choice)
	{ 
       case 1:add_num(&n1,&n2,&res);
	          break;
       case 2:sub_num(&n1,&n2,&res);
	          break;
       case 3:mul_num(&n1,&n2,&res);
	          break;
       case 4:div_num(&n1,&n2,&res,&flag);
	          break;
	}
	if(flag==0)
	  printf("result= %d\n",res);
	flag=0;
  }
  return 0;
}

int menu(int *ch,int *num1,int *num2)
{
  printf("Enter the two numbers: ");
  scanf("%d" "%d",num1,num2);

  printf("0.Exit\n1.Addition\n2.Subtract\n3.Multiplication\n4.Division\n");
  printf("Enter the choice: ");
  scanf("%d",ch);

  return *ch;
}

void* add_num(int *num1,int *num2,int* result)
{
   *result=*num1 + *num2;
}

void* sub_num(int *num1,int *num2,int* result)
{
   *result=*num1 - *num2;
}

void* mul_num(int *num1,int *num2,int* result)
{
   *result=*num1 * *num2;
}

void* div_num(int *num1,int *num2,int* result,int *fl)
{
   if(*num2==0)
   {
     *fl=1;
	 printf("Not divisible by zero!!\n");
   }
   else
     *result=*num1 / *num2;
}
  























