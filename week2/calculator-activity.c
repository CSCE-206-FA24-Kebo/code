#include <stdio.h>

int main() {
    int num1, num2, sum, difference, multiplication;
    char operator;

    // Input first number
    printf("Enter first number: ");
    scanf("%d", &num1);

    // Input operator - not used
    printf("Enter operator (+, -, *): ");
    scanf(" %c", &operator);

    // Input second number
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("%d %c %d\n", num1, operator, num2);

    /*
    Calculate the sum, the difference and the multiplication and store then in the respective variables

    Print the results in the following format
    e.g:
    6 + 4 = 10
    6 - 4 = 2
    6 * 4 = 24
    */

    return 0;
}