#include<stdio.h>

typedef struct student{
    int roll_no;
	char name[20];
	int marks;
}stud_t;

int main()
{
  stud_t s;
  printf("Enter student information (roll no, name, marks): \n");
  scanf("%d %s %d",&s.roll_no,s.name,&s.marks);

  printf("Roll no.: %d\n",s.roll_no);
  printf("Name: %s\n",s.name);
  printf("Marks: %d\n",s.marks);

  return 0;
}


