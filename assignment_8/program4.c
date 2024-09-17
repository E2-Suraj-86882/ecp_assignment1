#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    int rollNumber;
    char name[NAME_LENGTH];
    int age;
    float grade;
} Student;

// Function to search for a student by roll number
Student* searchByRollNumber(Student students[], int numStudents, int rollNumber) {
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == rollNumber) {
            return &students[i];
        }
    }
    return NULL; // Return NULL if not found
}

// Function to search for a student by name
Student* searchByName(Student students[], int numStudents, const char *name) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return &students[i];
        }
    }
    return NULL; // Return NULL if not found
}

int main() {
    Student students[MAX_STUDENTS] = {
        {101, "Alice", 20, 88.5},
        {102, "Bob", 21, 91.0},
        {103, "Charlie", 22, 85.5},
        // Add more students as needed
    };

    int numStudents = 3; // Update this to the number of students in the array

    // Example usage of searchByRollNumber
    int rollNumberToSearch = 102;
    Student *student = searchByRollNumber(students, numStudents, rollNumberToSearch);
    if (student != NULL) {
        printf("Found student by roll number %d: %s, Age: %d, Grade: %.2f\n",
               student->rollNumber, student->name, student->age, student->grade);
    } else {
        printf("Student with roll number %d not found.\n", rollNumberToSearch);
    }

    // Example usage of searchByName
    const char *nameToSearch = "Charlie";
    student = searchByName(students, numStudents, nameToSearch);
    if (student != NULL) {
        printf("Found student by name %s: Roll Number: %d, Age: %d, Grade: %.2f\n",
               student->name, student->rollNumber, student->age, student->grade);
    } else {
        printf("Student with name %s not found.\n", nameToSearch);
    }

    return 0;
}

