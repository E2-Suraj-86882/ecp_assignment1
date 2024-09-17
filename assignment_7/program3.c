#include<stdio.h>

void accept_arr(int(*)[3]);
void print_arr(int(*)[3]);
void sum_row(int (*ptr)[3]);

int row,col;
int main()
{
  int arr[3][3];
  
  accept_arr(arr);
  print_arr(arr);
  sum_row(arr);
 return 0;
}

void accept_arr(int (*ptr)[3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	{
	   printf("Enter arr[%d][%d]:",i,j);
	   scanf("%d",&ptr[i][j]);
	}
  }
}

void print_arr(int (*ptr)[3])
{ 
  int i,j;
  printf("2-D Array: \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	{
	   printf("%-5d",ptr[i][j]);
	}
	printf("\n");
  }
}

void sum_row(int (*ptr)[3])
{ 
  int i,j,sum;
  printf("Sum of row: \n");
  for(i=0;i<3;i++)
  { 
    sum=0;
    for(j=0;j<3;j++)
	{
	   sum=sum+ptr[i][j];
	}
	printf("%d row sum: %d\n",i,sum);
  }
}

void sum_col(int (*ptr)[3])
{ 
  int i,j,sum;
  printf("Sum of row: \n");
  for(i=0;i<3;i++)
  { 
    sum=0;
    for(j=0;j<3;j++)
	{
	 
	}
	printf("%d row sum: %d\n",i,sum);
  }
}
