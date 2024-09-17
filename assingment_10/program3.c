#include<stdio.h>
#include<stdlib.h>

void binary_num(int,int);

int main(int argc,char *argv[])
{
  int num,mask=0x80;
  num=atoi(argv[1]);
  binary_num(num,mask);
  return 0;
}

void binary_num(int num,int mask)
{
  printf("Binary of %d: ",num);
  while(mask!=0)
  {
     if(num & mask)
	    printf("1");
	 else
	    printf("0");
	mask=mask>>1;
  }
  printf("\n");
}
