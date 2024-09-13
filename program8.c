//assignment1:Q9:Write a program to convert temperature in Celsius to Fahrenheit and vice versa.
#include<stdio.h>
int main(void)
{

float celsius, fahrenheit;
 
 printf("\n Enter Temp in fahrenheit : ");
 scanf("%f", &fahrenheit);

 celsius =(float)5/9*(fahrenheit - 32);
 printf("\n Temperature in celsius : %.2f ", celsius);

 printf("\n Enter Temp in Celsius : ");
 scanf("%f", &celsius);
 fahrenheit =(1.8 * celsius) + 32;
 printf("\n Temperature in Fahrenheit : %.2f ", fahrenheit);


return 0;
}
