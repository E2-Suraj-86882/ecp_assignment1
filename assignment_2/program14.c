#include<stdio.h>
int main()
{
  int emp_id;
  printf("Employees id range: 25 to 200\n");
  printf("Enter the employee id: ");
  scanf("%d",&emp_id);

  switch(emp_id)
  {
    if(emp_id >=100 && emp_id<=200)
    {
	   case 1:
	       printf("Employee id: %d\n",emp_id);
	       printf("Dept number: %d\n",10);
           printf("Dept name: manager\n");
           printf("Designation code : M\n");
           printf("Designation: Manager\n");
		   break;
    }
	else if(emp_id>=75 && emp_id<=99)
    {
       case 2:
	       printf("Employee id: %d\n",emp_id);
	       printf("Dept number: %d\n",20);
           printf("Dept name: management\n");
           printf("Designation code : S\n");
           printf("Designation: Supervisior\n");
		   break;
	}
	else if(emp_id>=51 && emp_id<=74)
	{      
	    case 3:
	       printf("Employee id: %d\n",emp_id);
	       printf("Dept number: %d\n",30);
           printf("Dept name: Sales\n");
           printf("Designation code : s\n");
           printf("Designation: Security officer\n");
		   break;
    }
	else if(emp_id>=25 && emp_id<=50)
    { 
	     case 4:
	       printf("Employee id: %d\n",emp_id);
	       printf("Dept number: %d\n",40);
           printf("Dept name: Designing\n");
           printf("Designation code : C\n");
           printf("Designation: Clerk\n");
		   break;
	}
	default:printf("Enter valid id!!\n");
	        break;
  }
  return 0;
}
