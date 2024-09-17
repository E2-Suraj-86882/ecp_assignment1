#include<stdio.h>
int menu(int*);

typedef struct student
{
  char name[20];
  int age;
  char gender[10];
  int std;
  int roll_no;
}stud_t;

void add_student(stud_t *ptr);
void view_info(const stud_t s);
int main()
{
  int choice;
  stud_t s;

  while(menu(&choice)!=0)
  {
    switch(choice)
	{
	   case 1:add_student(&s);
			  break;
	   case 2:view_info(s);
	          break;
	   default:printf("Enter valid choice!!\n");
	          break;
	}
  }
  return 0;  
}


int menu(int *ch)
{
  printf("0.Exit\n1.Enter Student information(Name,Age,gender,Standard,Roll no.):\n2.view student information:\n");
  printf("Enter the choice: ");
  scanf("%d",ch);
  return *ch;
}

void add_student(stud_t *ptr)
{
   scanf("%s""%d""%s""%d""%d",ptr->name,&ptr->age,ptr->gender,&ptr->std,&ptr->roll_no);
}

void view_info(const stud_t s)
{
  printf("%s\t%d\t%s\t%d\t%d\n",s.name,s.age,s.gender,s.std,s.roll_no);
}
