#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// Define a union to hold either a grade or a percentage
typedef union {
    char grade; // For grades A, B, C
    float percentage; // For percentage values
} Result;

// Define a structure to hold student information
typedef struct {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    int standard;
    Result result;
    int isGrade; // Flag to determine if result is a grade (1) or percentage (0)
} Student;

// Function to input student information from the user
void inputStudentInfo(Student *student) {
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter name: ");
    scanf("%s", student->name);

    printf("Enter standard (1-12): ");
    scanf("%d", &student->standard);

    if (student->standard <= 4) {
        printf("Enter grade (A/B/C): ");
        scanf(" %c", &student->result.grade); // Note the space before %c to consume any leftover whitespace
        student->isGrade = 1;
    } else {
        printf("Enter percentage (e.g., 85.5): ");
        scanf("%f", &student->result.percentage);
        student->isGrade = 0;
    }
}

// Function to display student information
void displayStudentInfo(const Student *student) {
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Name: %s\n", student->name);
    printf("Standard: %d\n", student->standard);

    if (student->isGrade) {
        printf("Result: Grade %c\n", student->result.grade);
    } else {
        printf("Result: Percentage %.2f\n", student->result.percentage);
    }
}

int main() {
    Student students[3]; // Array to hold information for 3 students

    // Input information for 3 students
    for (int i = 0; i < 3; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        inputStudentInfo(&students[i]);
    }

    // Display information for 3 students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        displayStudentInfo(&students[i]);
    }

    return 0;
}

