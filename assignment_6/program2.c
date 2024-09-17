#include <stdio.h>
#include <ctype.h>

// Function to compute the length of a string
size_t my_strlen(const char* str) {
    const char *s = str;
    while (*s) s++;
    return s - str;
}

// Function to copy a string from src to dest
char* my_strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*d++ = *src++)) {
        // Copying characters from src to dest
    }
    return dest;
}

// Function to concatenate src to the end of dest
char* my_strcat(char *dest, const char *src) {
    char *d = dest;
    while (*d) d++; // Move d to the end of dest
    while ((*d++ = *src++)) {
        // Concatenate src to the end of dest
    }
    return dest;
}

// Function to compare two strings
int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

// Function to compare two strings case-insensitively
int my_stricmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2 || tolower((unsigned char)*str1) == tolower((unsigned char)*str2))) {
        str1++;
        str2++;
    }
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}

// Function to reverse a string
char* my_strrev(char* str) {
    char *start = str;
    char *end = str;
    char temp;

    if (str) {
        // Move end to the last character
        while (*end) end++;
        end--;

        // Swap characters from start and end moving towards the center
        while (start < end) {
            temp = *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
    return str;
}

// Function to find the first occurrence of a character in a string
char* my_strchr(const char *str, int ch) {
    while (*str) {
        if (*str == ch) return (char *)str;
        str++;
    }
    return NULL;
}

// Function to find the first occurrence of a substring in a string
char* my_strstr(const char *str, const char *substr) {
    const char *p1;
    const char *p2;

    while (*str) {
        p1 = str;
        p2 = substr;

        while (*p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (!*p2) return (char *)str;
        str++;
    }
    return NULL;
}

// Main function to test the implementations
int main() {
    char str1[100] = "Hello, World!";
    char str2[100] = "Hello, ";
    char str3[100];
    char *substr;

    // Test strlen
    printf("Length of str1: %zu\n", my_strlen(str1));

    // Test strcpy
    my_strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    // Test strcat
    my_strcat(str2, "World!");
    printf("str2 after strcat: %s\n", str2);

    // Test strcmp
    printf("strcmp(str1, str3): %d\n", my_strcmp(str1, str3));
    printf("strcmp(str1, str2): %d\n", my_strcmp(str1, str2));

    // Test stricmp
    printf("stricmp(\"HELLO\", \"hello\"): %d\n", my_stricmp("HELLO", "hello"));

    // Test strrev
    printf("str1 before strrev: %s\n", str1);
    my_strrev(str1);
    printf("str1 after strrev: %s\n", str1);

    // Test strchr
    printf("strchr(str1, 'W'): %s\n", my_strchr(str1, 'W'));

    // Test strstr
    substr = my_strstr(str2, "World");
    printf("strstr(str2, \"World\"): %s\n", substr ? substr : "Not found");

    return 0;
}

