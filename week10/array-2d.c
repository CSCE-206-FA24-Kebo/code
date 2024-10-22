#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_ASSIGNMENTS 4

int main() {
    // Declaring a 2D array: grades[row][column]
    // First dimension (rows) represents students
    // Second dimension (columns) represents assignments
    int grades[NUM_STUDENTS][NUM_ASSIGNMENTS] = {
        {95, 88, 76, 89},    // Student 1's grades
        {70, 87, 90, 93},    // Student 2's grades
        {85, 82, 93, 85}     // Student 3's grades
    };

    // Array to store student names for better output
    char *students[] = {"Alice", "Bob", "Charlie"};
    
    // Array to store assignment names
    char *assignments[] = {"Quiz 1", "Homework 1", "Quiz 2", "Project 1"};

    // 1. Printing the grade matrix
    printf("\n=== Class Grade Matrix ===\n\n");
    printf("Student      ");
    // Print header row with assignment names
    for(int j = 0; j < NUM_ASSIGNMENTS; j++) {
        printf("%-12s", assignments[j]);
    }
    printf("\n");
    
    // Print each student's grades
    for(int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-12s", students[i]);
        for(int j = 0; j < NUM_ASSIGNMENTS; j++) {
            printf("%-12d", grades[i][j]);
        }
        printf("\n");
    }

    // 2. Calculate and print each student's average
    printf("\n=== Student Averages ===\n");
    for(int i = 0; i < NUM_STUDENTS; i++) {
        float sum = 0;
        for(int j = 0; j < NUM_ASSIGNMENTS; j++) {
            sum += grades[i][j];
        }
        float average = sum / NUM_ASSIGNMENTS;
        printf("%s's average: %.2f\n", students[i], average);
    }

    // 3. Calculate and print each assignment's average
    printf("\n=== Assignment Averages ===\n");
    for(int j = 0; j < NUM_ASSIGNMENTS; j++) {
        float sum = 0;
        for(int i = 0; i < NUM_STUDENTS; i++) {
            sum += grades[i][j];
        }
        float average = sum / NUM_STUDENTS;
        printf("%s average: %.2f\n", assignments[j], average);
    }

    // 4. Find highest and lowest grades
    int highest = grades[0][0];
    int lowest = grades[0][0];
    char *highestStudent = students[0];
    char *lowestStudent = students[0];
    char *highestAssignment = assignments[0];
    char *lowestAssignment = assignments[0];

    for(int i = 0; i < NUM_STUDENTS; i++) {
        for(int j = 0; j < NUM_ASSIGNMENTS; j++) {
            if(grades[i][j] > highest) {
                highest = grades[i][j];
                highestStudent = students[i];
                highestAssignment = assignments[j];
            }
            if(grades[i][j] < lowest) {
                lowest = grades[i][j];
                lowestStudent = students[i];
                lowestAssignment = assignments[j];
            }
        }
    }

    printf("\n=== Grade Statistics ===\n");
    printf("Highest grade: %d (%s - %s)\n", highest, highestStudent, highestAssignment);
    printf("Lowest grade: %d (%s - %s)\n", lowest, lowestStudent, lowestAssignment);

    return 0;
}