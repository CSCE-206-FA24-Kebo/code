#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define NUM_QUIZZES 4
#define NUM_STUDENTS 10

// Structure to hold student data
struct Student {
    char name[MAX_NAME_LENGTH];
    int quiz_grades[NUM_QUIZZES];
};

// Function to get student input
void getStudentInfo(struct Student *student) {
    printf("\nEnter student name: ");
    // Clear input buffer
    while (getchar() != '\n');
    fgets(student->name, MAX_NAME_LENGTH, stdin);
    // Remove newline character from name
    student->name[strcspn(student->name, "\n")] = 0;
    
    printf("Enter grades for 4 quizzes:\n");
    for (int i = 0; i < NUM_QUIZZES; i++) {
        do {
            printf("Quiz %d (0-100): ", i + 1);
            if (scanf("%d", &student->quiz_grades[i]) != 1 || 
                student->quiz_grades[i] < 0 || 
                student->quiz_grades[i] > 100) {
                printf("Invalid input. Please enter a grade between 0 and 100.\n");
                while (getchar() != '\n'); // Clear input buffer
                continue;
            }
            break;
        } while (1);
    }
}

// Function to write grades to file
void writeGradesToFile(struct Student students[], int count) {
    FILE *file = fopen("student_grades.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    // Write header
    fprintf(file, "Student Grade Records\n");
    fprintf(file, "----------------------------------------\n");
    fprintf(file, "Name            Quiz1  Quiz2  Quiz3  Quiz4\n");
    fprintf(file, "----------------------------------------\n");

    // Write each student's data
    for (int i = 0; i < count; i++) {
        fprintf(file, "%-15s", students[i].name);
        for (int j = 0; j < NUM_QUIZZES; j++) {
            fprintf(file, "%-7d", students[i].quiz_grades[j]);
        }
        fprintf(file, "\n");
    }

    fprintf(file, "----------------------------------------\n");
    fclose(file);
    printf("\nGrades have been written to student_grades.txt\n");
}

int main() {
    struct Student students[NUM_STUDENTS];
    int num_students;

    do {
        printf("Enter number of students (1-%d): ", NUM_STUDENTS);
        if (scanf("%d", &num_students) != 1 || 
            num_students < 1 || 
            num_students > NUM_STUDENTS) {
            printf("Invalid input. Please enter a number between 1 and %d.\n", NUM_STUDENTS);
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        break;
    } while (1);

    // Get information for each student
    for (int i = 0; i < num_students; i++) {
        printf("\nStudent %d of %d", i + 1, num_students);
        getStudentInfo(&students[i]);
    }

    // Write grades to file
    writeGradesToFile(students, num_students);

    return 0;
}