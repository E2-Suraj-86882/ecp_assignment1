/*ASSIGNMENT 3:Q12. Write a program to accept integer values of base and index and calculate power of base to
index.
Input: base: 2 index :5
Output: 32
Input: base: 8 index :3
Output: 512
*/

#include <stdio.h>
int main() {
	int base, index;
	long double result = 1.0;
	printf("Enter a base number: ");
	scanf("%d", &base);
	printf("Enter an index: ");
	scanf("%d", &index);

	for(index ;index != 0;--index) {
		result *= base;
	}
	printf("Answer = %.0Lf", result);
	return 0;
}
