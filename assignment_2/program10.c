#include<stdio.h>
int main()
{
 char ch;
 printf("Enter the charcter or other: ");
 scanf("%c",&ch);

 if(ch>=65 && ch<=90)
   printf("%c is a uppercase character\n",ch);
 else if(ch>=97 && ch<=122)
   printf("%c is a lowercase character\n",ch);
 else if(ch>=48 && ch<=57)
   printf("%c is a digit\n",ch);
 else if(ch==32 || ch==13 || ch==10 || ch==9 || ch==8)
   printf("%c is a space charcter\n",ch);
 else
   printf("Other character\n");
 return 0;
}
