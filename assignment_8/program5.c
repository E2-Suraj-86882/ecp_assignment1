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

// Function to sort students by roll number using Bubble Sort
void sortByRollNumber(Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                // Swap students[j] and students[j + 1]
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to sort students by name using Bubble Sort
void sortByName(Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Swap students[j] and students[j + 1]
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void printStudents(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Roll Number: %d, Name: %s, Age: %d, Grade: %.2f\n",
               students[i].rollNumber, students[i].name, students[i].age, students[i].grade);
    }
}

int main() {
    Student students[MAX_STUDENTS] = {
        {101, "Alice", 20, 88.5},
        {103, "Charlie", 22, 85.5},
        {102, "Bob", 21, 91.0},
        // Add more students as needed
    };

    int numStudents = 3; // Update this to the number of students in the array

    printf("Students sorted by roll number:\n");
    sortByRollNumber(students, numStudents);
    printStudents(students, numStudents);

    printf("\nStudents sorted by name:\n");
    sortByName(students, numStudents);
    printStudents(students, numStudents);

    return 0;
}

