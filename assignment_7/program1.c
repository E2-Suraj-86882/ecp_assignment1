#include<stdio.h>

void accept_arr(int(*)[3]);
void print_arr(int(*)[3]);

int row,col;
int main()
{
  int arr[3][3];
  
  accept_arr(arr);
  print_arr(arr);

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
