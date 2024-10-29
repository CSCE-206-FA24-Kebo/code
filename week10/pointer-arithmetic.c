#include <stdio.h>

// Practice on pointers arithmetic

int main()
{

    // Array of integers
    int a[5] = {11, 22, 33, 44, 55};

    // Pointer p to a memory location
    int *p = &a[0]; // Or "int *p = a;" works just as well

    // Prints 11
    printf("%d\n", *p);

    // Prints 22
    printf("%d\n", *(p + 1));  

    // Print addressing information: value of the integer a[0] and the address of a[0]
    printf("The value of a[0] is %d\n", a[0]);
    printf("And its address is %p\n", (void *)&p);
}