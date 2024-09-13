/******************************************************************************
 * File: calculator.c
 * 
 * Author: [STUDENT NAME]
 * Email: [STUDENT EMAIL]
 * 
 * A calculator program using functions
 * 
 * Copyright © 2024. All rights reserved.
 *****************************************************************************/

#include <stdio.h>
#include <math.h> // Used by the pow function

// Struct to represent an operation
struct Operation
{
 int operand1;
 int operand2;
 int result;
 char operator;
};

// Function prototypes
void printMenu();
int addition(int number1, int number2);
int subtraction(int number1, int number2);
int multiplication(int number1, int number2);
float division(int number1, float number2);
int power(int base, int exponent);
int factorial(int number1);

int main() {
    int num1, num2, result;
    float division_result;
    int choice;
    struct Operation op;

    // Call the function that prints a list of options to the user
    printMenu();

    // Prompt the user to make a choice
    printf("Please make a choice - choose a number! ");
    scanf("%d", &choice);

    // A switch - case allows you to operate under multiple condition

    switch (choice)
    {
    case 1:
        /* Addition */
        printf("Enter two numbers: ");
        scanf("%d %d", &op.operand1, &op.operand2);
        op.result = addition(op.operand1, op.operand2);
        printf("%d + %d = %d\n", op.operand1, op.operand2, op.result);
        break;
    case 2:
        /* Substraction */
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = subtraction(num1, num2);
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case 3:
        /* Multiplication */
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = multiplication(num1, num2);
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    case 4:
        /* Division */
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        division_result = division(num1, num2);
        printf("%d / %d = %0.2f\n", num1, num2, division_result);
        break;
    case 5:
        /* Power */
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        result = power(num1, num2);
        printf("%d ^ %d = %d\n", num1, num2, result);
        break;
    case 6:
        /* Factorial of one number */
        printf("Enter on number: ");
        scanf("%d", &num1);
        result = factorial(num1);
        printf("%d! = %d\n", num1, result);
        break;
    case 7:
        /* Exit */
        printf("Exiting ...\n");
        break;
    default:
        /*Default behaviour of all else fails*/
        printf("Invalid choice!\n");
        break;
    }
    
    return 0; // End
}

// Functions implementations

void printMenu() {
    printf("Advanced Aggies Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial\n");
    printf("7. Exit\n");
}

// Addition
int addition(int number1, int number2){
    return number1 + number2;
}

// Subtraction
int subtraction(int number1, int number2){
    return number1 - number2;
}

// Multiplication
int multiplication(int number1, int number2){
    return number1 * number2;
}

// Division
float division(int number1, float number2){
    return number1 / number2;
}

// Power using a function from the math library (pow)
int power(int base, int exponent){
    return pow(base,exponent); 
}

// Calculate the factorial of a number - (Using recursion)
int factorial(int number1){
    // Base case
    if (number1 == 1)
        return 1;

    // Recursive case
    return number1 * factorial(number1-1);
}