#include<stdio.h>
int menu(int* ch);
void accept_array(int*,int);
void print_array(int*,int);
void selection_sort(int*,int);
int binary_search(int*,int);
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
        case 3:selection_sort(arr,size);
		       break;
        case 4:ret=binary_search(arr,size);
		       if(ret==-1)
			      printf("Number Not found!!\n");
			   else
			      printf("Number found at %d location index!!\n",ret);
		       break;
	    default:printf("Enter valid choice\n");
		       break;
	}       
  }
  return 0;
}

int menu(int* ch)
{
  printf("0.exit\n1.accept array\n2.print array\n3.sort array\n4.search a element\n");
  printf("Enter the choice: ");
  scanf("%d",ch);
  return *ch;
}
void accept_array(int* brr,int n)
{  
   printf("Enter total %d elements\n",n);
   for(int i=0;i<n;i++)
      scanf("%d",&brr[i]);
}

void print_array(int brr[],int n)
{
  for(int j=0;j<n;j++)
      printf("%d element: %d\n",j+1,*(brr+j));
}

void selection_sort(int* brr,int n)
{
   int i,j,min;
   for(i=0;i<n-1;i++)
   { 
     min=brr[i];
     for(j=i+1;j<n;j++)
	 {
	   if(brr[j]<min)
	   {
	      min=brr[j];
		  brr[j]=brr[i];
		  brr[i]=min;
       }
	 }
   }
}

int binary_search(int* brr,int n)
{
   selection_sort(brr,n);
   int min,mid,max,num,flag=0;
   printf("Which number would you want to find: ");
   scanf("%d",&num);
   min=0;
   mid=(min+max)/2;
   max=(n-1);
   while(flag!=1)
   {
   	  if(num==brr[mid])
	  {
        return mid;
	  }
   	  else if(num>brr[mid])
      {
	     min=mid+1;
		 mid=(min+max)/2;
      }
	  else
      {
	    max=mid-1;
		mid=(min+max)/2;
      }
   }
   return -1;
}
