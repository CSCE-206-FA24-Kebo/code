/*
Implementation of a bubble sort
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Sorting function
void bubbleSort (int grades[], int n);

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
    bubbleSort(exam_1_grades, number_of_grades);

    printf("The sorted array is: \n");
    printGrades(exam_1_grades, number_of_grades);

    return 0;
}

// Bubble sort
void bubbleSort (int grades[], int n){
    int i;
    int j;
    int swapped;

    for (i=0; i<n-1; i++){
        swapped = 0; // Reset of the flag
        for (j=0; j < n-i-1; j++)
            // If some numbers are out of order
            if(grades[j] > grades[j+1]){
                swap(&grades[j], &grades[j+1]);
                swapped = 1;// Set the flag
            }
        // If there was no swaps -- Indication that the array is fully sorted
        if (swapped == 0)
            break;
    }
}


// Swaps two integers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Prints the grades
void printGrades(int grades[], int n){
    int i = 0;
    for (i = 0; i < n; i++){
        printf("%d ", grades[i]);
    }
    printf("\n");
}