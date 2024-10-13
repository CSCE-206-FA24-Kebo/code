/*
Implement a selection sort
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Sorting function
void selectionSort (int grades[], int n);

// Swap two values
void swap(int *a, int *b);

// Print an array of number
void printGrades(int grades[], int n);


int main() {
    int exam_1_grades[] = {95, 92, 86, 81, 74, 68, 100, 57, 60, 23, 10}; // Array of scores
    int number_of_grades = sizeof(exam_1_grades)/sizeof(exam_1_grades[0]); 

    printf("The original array is: \n");
    printGrades(exam_1_grades, number_of_grades);

    // Sort the array of exam grades
    selectionSort(exam_1_grades, number_of_grades);

    printf("The sorted array is: \n");
    printGrades(exam_1_grades, number_of_grades);

    return 0;
}


void selectionSort (int grades[], int n){
    int i;
    int j;
    int min_index;

    for (i = 0; i < n-1; i++){
        // Find the minimum number in the unsorted array
        min_index = i;

        for (j = i+1; j < n; j++){
            if(grades[j] < grades[min_index])
                min_index = j; // Update the minimum index to become the current position
        }
        
        // Swap the found minimum element with the first element
        swap(&grades[min_index] , &grades[i]);
    }
}


// Swap two variable
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printGrades(int grades[], int n){
    int i = 0;
    for (i = 0; i < n; i++){
        printf("%d ", grades[i]);
    }
    printf("\n");
}