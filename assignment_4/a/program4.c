#include<stdio.h>
int menu(void);
int add_num(int n1,int n2);
int sub_num(int n1,int n2);
int mul_num(int n1,int n2);
int div_num(int n1,int n2);
int n1,n2,choice,flag;
int main()
{
   int res;
   while(menu()!=0)
   {   
       flag=0;
       switch(choice)
	   {
          case 1:res=add_num(n1,n2);
		        break;
          case 2:res=sub_num(n1,n2);
		        break;
          case 3:res=mul_num(n1,n2);
		        break;
          case 4:res=div_num(n1,n2);
		        break;
	      default:printf("Invalid choice\n");
		         flag=1;
		        break;
	   }
	   if(flag==0)
	     printf("result = %d\n",res);
     
   }
  return 0;
}

   int add_num(int n1,int n2)
   {
      return n1+n2;
   }
   int sub_num(int n1,int n2)
   {
      return n1-n2;
   }
   int mul_num(int n1,int n2)
   {
      return n1*n2;
   }
   int div_num(int n1,int n2)
   {
      if(n2==0)
	  {
	     flag=1;
	     printf("Not divisible by zero!!\n");
	  }
	  else
         return n1/n2;
   }

   int menu(void)
   {
     printf("Enter two operands: ");
	 scanf("%d" "%d",&n1,&n2);
	 printf("0.Exit\n1.Addition\n2.Subtract\n3.Multiplication\n4.Division\nEnter the choice: ");
	 scanf("%d",&choice);
	 return choice;
   }
