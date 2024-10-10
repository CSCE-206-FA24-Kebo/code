/*
Implement a linear search
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ARRAY_SIZE 100

int linear_search (int exam_1_grades[], int score, int number_of_grades);

int main() {
    int exam_1_grades[ARRAY_SIZE]; // Creates a statis array of size ARRAY_SIZE
    //int exam_1_grades[] = {95, 92, 86, 81, 74, 68}; // Array of scores
    int score = 68; // This is the score to search for
    int position;
    // int number_of_grades = sizeof(exam_1_grades)/sizeof(exam_1_grades[0]); 
    int number_of_grades = sizeof(exam_1_grades)/sizeof(int);

    /*
    - - - -
    - - - -
    - - - -
    - - - -
    - - - -
    - - - -
    */

    printf("The number of grades is: %d\n", number_of_grades);

    // This function searches for a score in the array of grades
    position = linear_search(exam_1_grades, score, number_of_grades);

    if (position == -1)
        printf("The score %d is not found :(\n", score);
    else
        printf("The score %d is found at position %d\n", score, position);

    return 0;
}

int linear_search(int exam_1_grades[], int score, int number_of_grades)
{
 // Linear search of [95, 92, 86, 81, 74, >68] of 92
    for(int i=0; i < number_of_grades; i++){
        printf("Accesssing %d \t", exam_1_grades[i]);
        if (exam_1_grades[i] == score)
            return i; // This is the index of the found score
    }
    // Fallback!
    return -1; // Flag for not found score
}