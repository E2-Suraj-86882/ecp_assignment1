#include<stdio.h>
void accept_array(int*,int);
void print_array(int*,int);
void reverse_array(int*,int);
int main()
{
  int size;
  printf("How many elements you want in array: ");
  scanf("%d",&size);
  int arr[size];
  accept_array(arr,size);
  print_array(arr,size);
  reverse_array(arr,size);
  return 0;
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

void reverse_array(int* crr,int n)
{
   int i=0;
   printf("Reverse array are: \n");
   for(i=(n-1);i>=0;i--)
   {
     printf("%d element: %d\n",i+1,crr[i]);
   }
}
