#include <stdio.h>

// Function to find and replace a substring in a string
void findAndReplace(char *str, const char *oldSub, const char *newSub) {
    char buffer[1024];
    char *pos, temp[1024];
    int index = 0;
    int oldLen = 0;
    int newLen = 0;
    
    // Calculate lengths of old and new substrings
    while (oldSub[oldLen] != '\0') oldLen++;
    while (newSub[newLen] != '\0') newLen++;

    // Iterate over the string
    while ((pos = strstr(str, oldSub)) != NULL) {
        // Copy characters from the start of str to the position of oldSub
        int len = pos - str;
        strncpy(temp, str, len);
        temp[len] = '\0';

        // Append newSub to temp
        strcat(temp, newSub);

        // Append the rest of str after oldSub
        strcat(temp, pos + oldLen);

        // Copy the result back to str
        strcpy(str, temp);
    }
}

// Helper function to find the first occurrence of a substring in a string
char* strstr(const char *str, const char *sub) {
    while (*str) {
        const char *start = str;
        const char *pattern = sub;
        while (*str && *pattern && *str == *pattern) {
            str++;
            pattern++;
        }
        if (!*pattern) return (char *)start;
        str = start + 1;
    }
    return NULL;
}

// Helper function to copy a string
char* strncpy(char *dest, const char *src, size_t n) {
    char *d = dest;
    while (n-- && (*d++ = *src++)) {
        // Copy characters from src to dest
    }
    return dest;
}

// Helper function to concatenate two strings
char* strcat(char *dest, const char *src) {
    char *d = dest;
    while (*d) d++; // Move to the end of dest
    while ((*d++ = *src++)) {
        // Append src to the end of dest
    }
    return dest;
}

// Helper function to copy a string
char* strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*d++ = *src++)) {
        // Copy characters from src to dest
    }
    return dest;
}

int main() {
    char str[1024] = "Hello, world! This world is amazing.";
    const char *oldSub = "world";
    const char *newSub = "universe";

    printf("Original string: %s\n", str);
    findAndReplace(str, oldSub, newSub);
    printf("Modified string: %s\n", str);

    return 0;
}

