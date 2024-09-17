#include<stdio.h>
int menu(int* ch);
void accept_array(int*,int);
void print_array(int*,int);
void max_element(int*,int,int*);
void min_element(int*,int,int*);
int main()
{
  int size,choice,max,min;
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
	    case 3:max_element(arr,size,&max);
		       break;
	    case 4:min_element(arr,size,&min);
		       break;
	    default:printf("Enter valid choice\n");
		       break;
	}       
  }
  return 0;
}

int menu(int* ch)
{
  printf("0.exit\n1.accept array\n2.print array\n3.find maximum number\n4.find minimum number\n");
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

void max_element(int *brr,int n,int *maxi)
{
   int i=0;
   *maxi=brr[i];
   for(i=1;i<n;i++)
   {
     if(brr[i]>*maxi)
	    *maxi=brr[i];
   }
   printf("Maximum : %d\n",*maxi);
}

void min_element(int *brr,int n,int *mini)
{
   int i=0;
   *mini=brr[i];
   for(i=1;i<n;i++)
   {
     if(brr[i]<*mini)
	    *mini=brr[i];
   }
   printf("Minimum : %d\n",*mini);
}
