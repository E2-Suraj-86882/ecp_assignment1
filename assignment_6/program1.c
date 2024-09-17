#include<stdio.h>
#include<string.h>
int menu(int*);
void accept_string(char * );
void accept_2_strings(char *str2,char *str3);
void my_strlen(char*);
void my_strcpy(char *str1, char *str2);
void my_strcat(char *str2,char *str3);
void my_strcmp(char *str1,char *str2);
void my_strncmp(char *str1,char *str2);
void my_strrev(char *str1);
void my_strncat(char *str1,char *str2);
void my_strncpy(char *str1, char *str2);
void my_strchr(char *str);
void my_strstr(char *str);
void my_strtok(char *str);

int main()
{
  int choice;
  char str[20];
  char str1[20];
  char str2[20];
  

  while(menu(&choice)!=0)
  {
    switch(choice)
	{
	  case 1:my_strlen(str);
	        break;
	  case 2:my_strcpy(str1,str2);
	        break;
	  case 3:my_strcat(str1,str2);
	        break;
	  case 4:my_strcmp(str1,str2);
	        break;
	  case 5:my_strncmp(str1,str2);
	        break;
	  case 6:my_strrev(str);
	        break;
	  case 7:my_strncat(str1,str2);
	        break;
	  case 8:my_strncpy(str1,str2);
	        break;
	  case 9:my_strchr(str);
	        break;
	  case 10:my_strstr(str);
	        break;
	  case 11:my_strtok(str);
	        break;
	  default:printf("Invalid case!!!\n");
	        break;
	}
  }
  return 0;
}


int menu(int *ch)
{
  printf("0.exit\n1.strlen()\n2.strcpy()\n3.strcat()\n4.strcmp()\n5.stricmp()\n6.strrev()\n7.strncat()\n");
  printf("8.strncpy()\n9.strchr()\n10.strstr()\n11.strtok()\n");
  printf("Enter the choice: ");
  scanf("%d",ch);
  return *ch;
}

void accept_string(char *str)
{ 
   printf("Enter the string:");
   scanf("%*c%[^\n]s",str);
}
 
void accept_2_strings(char *str1,char *str2)
{
   printf("Enter the string 1:");
   scanf("%*c%[^\n]s",str1);
   printf("Enter the string 2:");
   scanf("%*c%[^\n]s",str2);
}

void my_strlen(char *str1)
{
  accept_string(str1);
  printf("Length of string: %lu\n",strlen(str1));
  str1=NULL;
}

void my_strcpy(char *str1, char *str2)
{
  accept_string(str1);
  strcpy(str2,str1);
  printf("String 2: %s\n",str2);
  str1=NULL;
  str2=NULL;
}


void my_strcat(char *str1,char *str2)
{
  accept_2_strings(str1,str2);
  strcat(str1,str2);
  printf("String 1: %s\n",str1);
  str1=NULL;
  str2=NULL;
}

void my_strcmp(char *str1,char *str2)
{
    accept_2_strings(str1,str2);
	if(strcmp(str1,str2)==0)
	   printf("Both strings are equal\n");
	else
	   printf("Strings are not equal\n");
    str1=NULL;
    str2=NULL;
}

void my_strncmp(char *str1,char *str2)
{
    accept_2_strings(str1,str2);
	int n;
	printf("How many number of bytes would you compare: ");
	scanf("%d",&n);
	if(strncmp(str1,str2,n)==0)
	   printf("Both strings are equal\n");
	else
	   printf("Strings are not equal\n");
    str1=NULL;
    str2=NULL;
}

void my_strrev(char *str1)
{
  accept_string(str1);
  //printf("Reverse string: %s\n",strrev(str1));
}

void my_strncat(char *str1,char *str2)
{
    int n;
    accept_2_strings(str1,str2);
	printf("How many number of bytes would you append: ");
	scanf("%d",&n);
	strncat(str1,str2,n);
	printf("String 1: %s\n",str1);
    str1=NULL;
    str2=NULL;
}

void my_strncpy(char *str1, char *str2)
{
  	int n;
  	accept_string(str1);
  	printf("How many number of bytes would you copy: ");
  	scanf("%d",&n);
  	strncpy(str2,str1,n);
  	printf("String 2: %s\n",str2);
    str1=NULL;
    str2=NULL;
}

void my_strchr(char *str)
{
   accept_string(str);
   char ch;
   char *ptr;
   printf("Which cahracter would you find in that array: ");
   scanf("%*c%c",&ch);
   ptr=strchr(str,ch);
   printf("\ncharacter : %c\n located at %lu address\n",ch,ptr);
   str=NULL;
}

void my_strstr(char *str)
{
   accept_string(str);
   char sub_str[20];
   char *ptr;
   printf("Enter sub-string:");
   scanf("%*c%[^\n]s",sub_str);
   ptr=strstr(str,sub_str);
   printf("String: %s\n",ptr);
   str=NULL;
}

void my_strtok(char *str)
{
   accept_string(str);
   char ch;
   char *ptr;
   //printf("Enter the charcter delimiter: ");
  // scanf("%c",&ch);
   printf("Here delimiter: space\n");
   ptr=strtok(str," ");
   while(ptr!=NULL)
   {
      printf("Token of string : %s\n",ptr);
	  ptr=strtok(NULL," ");
   }
}
