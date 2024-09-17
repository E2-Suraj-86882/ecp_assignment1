#include <stdio.h>
#include <string.h>

// Function to find and replace all occurrences of a substring in a string
void findAndReplace(char *str, const char *find, const char *replace) {
    char buffer[1024];
    char *pos;
    int findLen = strlen(find);
    int replaceLen = strlen(replace);
    int index = 0;

    buffer[0] = '\0'; // Initialize buffer as empty

    // Loop through the string until no more occurrences of 'find'
    while ((pos = strstr(str, find)) != NULL) {
        // Copy characters from the start of str to the position of find
        int len = pos - str;
        strncpy(buffer + index, str, len);
        index += len;

        // Append the replacement substring
        strcpy(buffer + index, replace);
        index += replaceLen;

        // Move past the substring that was replaced
        str = pos + findLen;
    }

    // Append the remaining part of str after the last occurrence
    strcpy(buffer + index, str);

    // Copy the result back to str
    strcpy(str, buffer);
}

int main() {
    char str[1024] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    printf("Original string: %s\n", str);
    findAndReplace(str, find, replace);
    printf("Modified string: %s\n", str);

    return 0;
}

