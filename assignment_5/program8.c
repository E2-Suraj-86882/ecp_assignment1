#include<stdio.h>
int menu(int* ch);
void accept_array(int*,int);
void print_array(int*,int);
int linear_search(int*,int);

int main()
{
  int size,choice,ret;
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
        case 3:ret=linear_search(arr,size);
		       if(ret==-1)
			     printf("Number not found!!\n");
			   else
			     printf("Number found at %d location!!\n",ret);  
		       break;
	    default:printf("Enter valid choice\n");
		       break;
	}       
  }
  return 0;
}

int menu(int* ch)
{
  printf("0.exit\n1.accept array\n2.print array\n3.Search a number\n");
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

int linear_search(int* brr,int n)
{
   int num,i;
   printf("Which number would you find: ");
   scanf("%d",&num);
   
   for(i=0;i<n;i++)
   {
      if(brr[i]==num)
	     return i+1;
   }
   return -1;
}
