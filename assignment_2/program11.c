#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the x co-ordinate value: ");
  scanf("%d",&x);
  printf("Enter the y co-ordinate value: ");
  scanf("%d",&y);

  if(x==0 && y==0)
    printf("Points lies on origin\n");
  else if(x>=1 && y>=1)
    printf("Points lies on 1st quadrant\n");
  else if(x>=1 && y<=0)
    printf("Points lies on 2nd quadrant\n");
  else if(x<=0 && y<=0)
    printf("Points lies on 3rd quadrant\n");
  else if(x<=0 && y>=0)
    printf("Points lies on 4th quadrant\n");
  return 0;
}
