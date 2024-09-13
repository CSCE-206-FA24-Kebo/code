/******************************************************************************
 * File: calculator.c
 * 
 * Author: David Kebo
 * Email: davidkebo@tamu.edu
 * 
 * This is a calculator for arithmetic operations
 * 
 * Copyright © 2024. All rights reserved.
 *****************************************************************************/

#include <stdio.h>

int main(){
    int num1;
    int num2;
    int result;
    char operator;
    // hello    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operator (+, -, *): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // printf("Addition: %d + %d = %d\n", num1, num2, result);

    // Use conditional statements - to perform arithmetic operation based on the operator that the user will

    // If the operator is an addition
    if (operator == '+'){
        // todo
        printf("The operator is an addition!\n");
        result = num1 + num2;
        printf("Addition: %d + %d = %d\n", num1, num2, result);
    }

    // If the operator is an substraction
    else if (operator == '-'){
        // todo
        printf("The operator is an substraction!\n");
        result = num1 - num2;
        printf("Substraction: %d + %d = %d\n", num1, num2, result);
    }

    // If the operator is an multiplication
    else if (operator == '*'){
        // todo
        printf("The operator is an multiplication!\n");
        result = num1 * num2;
        printf("Multiplication: %d * %d = %d\n", num1, num2, result);
    }
    else {
        printf("Sorry this is an invalid operation!\n");
    }

    return 0;
}
