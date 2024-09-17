#include<stdio.h>

typedef struct student{
    int roll_no;
	char name[20];
	int marks;
}stud_t;

void accept_struct(stud_t *s,stud_t (*ptr)[100],int*);
void print_struct(stud_t *s,stud_t (*arr)[100],int*);

int main()
{
  int n=0;
  stud_t arr[100][100];
  stud_t s;
  accept_struct(&s,arr,&n);
  print_struct(&s,arr,&n);
  search_roll();

  return 0;
}

void accept_struct(stud_t *s,stud_t (*ptr)[100],int *n)
{
  int count=0;
  printf("Enter student information (roll no, name, marks): \n");
  scanf("%d %s %d",&s->roll_no,s->name,&s->marks);
  
  while(count==0)
  {
	 ptr[*n][0]=s->roll_no;
	 ptr[*n][1]=s->name;
	(stud_t)ptr[*n][2]=s->marks;
	 count++;
  }
}

void print_struct(stud_t *s,stud_t (*arr)[100],int *n)
{ 
  int i,j;
  for(i=0;i<*n;i++)
  {
	 printf("arr[%d][%d]: %d\t",*n,i,arr[*n][0]);
	 printf("arr[%d][%d]: %s\t",*n,i,arr[*n][1]);
	 printf("arr[%d][%d]: %d\t",*n,i,arr[*n][2]);
  }
  printf("\n");
}
