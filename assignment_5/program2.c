#include<stdio.h>
int menu(int* ch);
void accept_array(int*,int);
void print_array(int*,int);
int main()
{
  int size,choice;
  printf("How many elements you want in array: ");
  scanf("%d",&size);
  int arr[size];

  while(menu(&choice)!=0)
  {
    switch(choice)
	{
        case 1:accept_array(arr,size);
		       break;
        case 2:print_array(arr,size);
		       break;
	    default:printf("Enter valid choice");
		       break;
	}       
  }
  return 0;
}

int menu(int* ch)
{
  printf("0.exit\n1.accept array\n2.print array\n");
  printf("Enter the choice: ");
  scanf("%d",ch);
  return *ch;
}
void accept_array(int* brr,int n)
{  
   printf("Enter total %d elemnets\n",n);
   for(int i=0;i<n;i++)
      scanf("%d",&brr[i]);
}

void print_array(int brr[],int n)
{
  for(int j=0;j<n;j++)
      printf("%d element: %d\n",j+1,*(brr+j));
}
