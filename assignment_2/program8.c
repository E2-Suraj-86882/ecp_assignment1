#include<stdio.h>
int main()
{
 int price,discount;
 printf("Enter the price: ");
 scanf("%d",&price);

 if(price>50)
 {
   discount=price*.15;
   printf("You got totai Rs.%d discount bill Rs. %d\n",discount,price);
 }
 else if(price>30)
 {
   discount=price*.10;
   printf("You got total Rs.%d discount on bill Rs. %d\n",discount,price);
 }
 else
   printf("Please buy above Rs.30 to get discount!!\n");
 return 0;
}
