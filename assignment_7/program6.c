#include<stdio.h>
#include<stdlib.h>

void accept_matrix(int ***ptr);
void print_matrix(int **ptr);
void free_matrix(int **ptr);

int main()
{
  int **ptr=NULL;
  accept_matrix(&ptr);
  print_matrix(ptr);
  free_matrix(ptr);
  
  return 0;
}

void accept_matrix(int ***ptr)
{
  *ptr=(int**)malloc(2*sizeof(int*));
  
  for(int i=0;i<2;i++)
     (*ptr)[i]=(int*)malloc(2*sizeof(int));
 
  for(int row=0;row<2;row++)
  {
    for(int col=0;col<2;col++)
	{
	  printf("arr[%d][%d]: ",row,col);
	  scanf("%d",&(*ptr)[row][col]);
	}
  }
}

void print_matrix(int **ptr)
{
  for(int row=0;row<2;row++)
  {
    for(int col=0;col<2;col++)
	{
	  printf("arr[%d][%d]: %d\n",row,col,ptr[row][col]);
	}
  }
}
void free_matrix(int **ptr)
{
   for(int i=0;i<2;i++)
      free(ptr[i]);
   free(ptr);
}
