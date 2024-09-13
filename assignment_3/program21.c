//ASSIGNMENT 3:Q21]Write a program to display First 5 prime numbers after a given number.


#include <stdio.h>

int main() 
{
	int start, num, found = 0;

	// Input from the user
	printf("Enter a number: ");
	scanf("%d", &start);

	// Start checking numbers greater than the input
	num = start + 1;

	while (found < 5) {
		int is_prime = 1; // Assume num is prime

		if (num <= 1) {
			is_prime = 0;
		} else if (num <= 3) {
			is_prime = 1;
		} else if (num % 2 == 0 || num % 3 == 0) {
			is_prime = 0;
		} else {
			for (int i = 5; i * i <= num; i += 6) {
				if (num % i == 0 || num % (i + 2) == 0) {
					is_prime = 0;
					break;
				}
			}
		}

		if (is_prime) {
			printf("%d ", num);
			found++;
		}
		num++;
	}
	printf("\n");
	return 0;
}

