/*ASSIGNMENT 3:Q15] Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.
*/


#include<stdio.h>

int main()
{
	int n1,n2,n3,res;
	char op;
	typedef enum menu{Exit,Add,Sub,Mul,Div}MENU;
	
	MENU ch;
	do
	{

	printf("Enter number : ");
	scanf("%d",&n1);

	printf("Enter +,-,*,/ : ");
	scanf("%*c%c",&op);
			
	printf("Enter number : ");
	scanf("%d",&n2);

	printf("0.exit\n 1.add\n 2.sub\n 3.mul\n 4.div\n");
	printf("your choice : ");
	scanf("%d",&ch);

	switch(ch)
	{
	case Exit:printf("Exit.......");
			break;
	case Add:res=n1+n2;
			printf("Add = %d\n",res);
			 break;
	case Sub:res=n1-n2;
			printf("Sub = %d\n",res);
			 break;
	case Mul:res=n1*n2;
			printf("Mul = %d\n",res);
			 break;
	case Div:if(n2==0)
				printf("divided by zero \n");
			 else
			 	res=n1/n2;
			printf("Div = %d\n",res);
			 break;
	default:printf("invalid...\n");
			break;
	}

}while(ch!=0);

	

return 0;
}

