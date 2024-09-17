#include<stdio.h>

typedef struct student{
    int roll_no;
	char name[20];
	int marks;
}stud_t;
void accept_struct(stud_t *ptr);
void print_struct(const stud_t s);

int main()
{
  stud_t s;
  accept_struct(&s);
  print_struct(s);
  return 0;
}

void accept_struct(stud_t *ptr)
{
  printf("Enter student information (roll no, name, marks): \n");
  scanf("%d %s %d",&ptr->roll_no,ptr->name,&ptr->marks);
}

void print_struct(const stud_t s)
{
  printf("Roll no.: %d\n",s.roll_no);
  printf("Name: %s\n",s.name);
  printf("Marks: %d\n",s.marks);
}
