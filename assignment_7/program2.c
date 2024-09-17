#include<stdio.h>

void accept_arr(int(*)[3]);
void print_arr(int(*)[3]);
void mul_a_b(int (*atr)[3],int btr[3][3]);
void sub_a_b(int (*atr)[3],int btr[3][3]);
void add_a_b(int (*atr)[3],int btr[3][3]);

int row,col;
int main()
{
  int arr[3][3];
  int brr[3][3];
  int crr[3][3];
  
  accept_arr(arr);
  print_arr(arr);

  accept_arr(brr);
  print_arr(brr);
  
  mul_a_b(arr,brr);
  sub_a_b(arr,brr);
  add_a_b(arr,brr);

 return 0;
}

void accept_arr(int (*ptr)[3])
{
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
	{
	   printf("Enter element[%d][%d]:",i,j);
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

void mul_a_b(int (*atr)[3],int btr[3][3])
{
  int i,j;
  printf("Multiplication of arr and brr: \n");
  for(i=0;i<3;i++)
  { 
    for(j=0;j<3;j++)
	{
	   printf("%-5d",atr[i][j] * btr[i][j]);
	}
	printf("\n");
  } 
}

void sub_a_b(int (*atr)[3],int btr[3][3])
{
  int i,j;
  printf("Subtraction of arr and brr: \n");
  for(i=0;i<3;i++)
  { 
    for(j=0;j<3;j++)
	{
	   printf("%-5d",atr[i][j] -  btr[i][j]);
	}
	printf("\n");
  } 
}

void add_a_b(int (*atr)[3],int btr[3][3])
{
  int i,j;
  printf("Addition of arr and brr: \n");
  for(i=0;i<3;i++)
  { 
    for(j=0;j<3;j++)
	{
	   printf("%-5d",atr[i][j] + btr[i][j]);
	}
	printf("\n");
  } 
}
