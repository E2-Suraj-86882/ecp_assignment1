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
void append(stud_t *ptr);
void print_students();
void search_roll(int roll);
void search_name(char*);
void edit_student(int std, int roll);
void delete_student(int roll);

int main()
{
  int choice,roll,std;
  char str[20];
  stud_t s;

  while(menu(&choice)!=0)
  {
    switch(choice)
	{
	   case 1:add_student(&s);
	          append(&s);
			  break;
	   case 2:print_students();
	          break;
	   case 3:printf("Enter roll no. you want to find: ");
	          scanf("%d",&roll);
	          search_roll(roll);
	          break;
	   case 4:printf("Enter name you want to find: ");
	          scanf("%*c%s",str);
	          search_name(str);
	          break;
	   case 5:printf("Enter std:  ");
	          scanf("%d",&std);
	          printf("Enter roll no: ");
	          scanf("%d",&roll);
	          edit_student(std,roll);
	          break;
	   case 6:printf("Enter roll no. you want to delete: ");
	          scanf("%d",&roll);
	          delete_student(roll);
	          break;
	   default:printf("Enter valid choice!!\n");
	          break;
	}
  }
  return 0;  
}


int menu(int *ch)
{
  printf("0.Exit\n1.Enter Student information(Name,Age,gender,Standard,Roll no.):\n2.view students information:\n");
  printf("3.search by roll no.\n4.search by name\n5.Edit stduent roll no,\n6.Delete one record\n");
  printf("Enter the choice: ");
  scanf("%d",ch);
  return *ch;
}

void add_student(stud_t *ptr)
{
   scanf("%s""%d""%s""%d""%d",ptr->name,&ptr->age,ptr->gender,&ptr->std,&ptr->roll_no);
}

void append(stud_t *ptr)
{
   FILE *fp=fopen("stud_info.txt","ab");
   fwrite(ptr, sizeof(stud_t), 1, fp);
   fclose(fp);
}

void view_info(const stud_t s)
{
  printf("%s\t%d\t%s\t%d\t%d\n",s.name,s.age,s.gender,s.std,s.roll_no);
}

void print_students()
{
    stud_t s;
	FILE *fp = fopen("stud_info.txt", "rb");
	while(fread(&s, sizeof(stud_t), 1, fp) > 0)
		view_info(s);
	fclose(fp);
}

void search_roll(int roll)
{
    stud_t s;
	FILE *fp = fopen("stud_info.txt", "rb");
	while(fread(&s, sizeof(stud_t), 1, fp) > 0)
	{
		if(roll == s.roll_no)
		{
			view_info(s);
			break;
		}
	}
	fclose(fp);
}

void search_name(char *na)
{
    stud_t s;
	FILE *fp = fopen("stud_info.txt", "rb");
	while(fread(&s, sizeof(stud_t), 1, fp) > 0)
	{
		if(na == s.name)
		{
			view_info(s);
			break;
		}
	}
	fclose(fp);
}

void edit_student(int std, int roll)
{
	stud_t s;
	FILE *fp = fopen("stud_info.txt", "rb+");
	while(fread(&s, sizeof(stud_t), 1, fp) > 0)
	{
		if(std == s.std)
		{
			fseek(fp, -sizeof(stud_t), SEEK_CUR);
			s.roll_no = roll;
			fwrite(&s, sizeof(stud_t), 1, fp);
			break;
		}
	}
	fclose(fp);
}

void delete_student(int roll)
{
	stud_t s;
	FILE *fp = fopen("stud_info.txt", "rb");
	FILE *tp = fopen("temp.txt", "wb");

	while(fread(&s, sizeof(stud_t), 1, fp) > 0)
	{
		if(roll != s.roll_no)
			fwrite(&s, sizeof(stud_t), 1, tp);
	}
	fclose(fp);
	fclose(tp);
	rename("temp.txt", "stud_info.txt");
}
