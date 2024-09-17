#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to convert an integer to a string representation in a given base
char* itoa(int value, char *string, int base) {
    // Handle edge cases
    if (base < 2 || base > 36) {
        // Invalid base
        return NULL;
    }

    // Handle zero separately, since it's a special case
    if (value == 0) {
        *string = '0';
        *(string + 1) = '\0';
        return string;
    }

    // Handle negative numbers for base 10
    char *ptr = string;
    int isNegative = 0;

    if (value < 0 && base == 10) {
        isNegative = 1;
        value = -value;
    }

    // Process individual digits
    char temp;
    char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    while (value != 0) {
        int remainder = value % base;
        *ptr++ = digits[remainder];
        value /= base;
    }

    // Append negative sign if necessary
    if (isNegative) {
        *ptr++ = '-';
    }

    *ptr = '\0'; // Null-terminate the string

    // Reverse the string
    char *start = string;
    char *end = ptr - 1;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    return string;
}

int main() {
    char buffer[33]; // Buffer to hold the converted string, enough for base 2 to base 36

    // Test cases
    printf("itoa(255, buffer, 10) = %s\n", itoa(255, buffer, 10)); // Decimal
    printf("itoa(255, buffer, 16) = %s\n", itoa(255, buffer, 16)); // Hexadecimal
    printf("itoa(-255, buffer, 10) = %s\n", itoa(-255, buffer, 10)); // Decimal negative
    printf("itoa(255, buffer, 2) = %s\n", itoa(255, buffer, 2)); // Binary

    return 0;
}

