#include <stdio.h>

// Function to compute factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute binomial coefficient C(n, r)
long long binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }

        // Print the numbers in Pascal's Triangle
        for (int j = 0; j <= i; j++) {
            printf("%lld ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;

    // Input from the user
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Print Pascal's Triangle
    printPascalsTriangle(rows);

    return 0;
}

