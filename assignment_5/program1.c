#include<stdio.h>
int cal_avg(int *brr,int size);
int cal_marks(int *crr,int size);
int sum;
int main()
{
  int size=5;
  int arr[size],i,avg;
  printf("Enter marks: \n");
  for( i=0;i<size;i++)
  {
    printf("Marks for %d subject:",i+1);
	scanf("%d",&arr[i]);
  }

  for( i=0;i<size;i++)
  {
    printf("\nMarks for %d subject:",i+1);
	printf("%d",arr[i]);
  }
  printf("\n");
 
  avg=cal_avg(arr,size);
  printf("Average of total marks: %d",avg);
  return 0;
}

int cal_avg(int *brr,int size)
{ 
   int avg;
   cal_marks(brr,size);
   avg=sum/size;
   return avg;
}

int cal_marks(int *crr,int size)
{
  for(int i=0;i<size;i++)
  {
     sum=sum+(crr[i]);
  }
  return sum;
}
