#include <stdio.h>

int main(void)
{
    int i = 206; // This is an integer stored on the stack in memory!
    int j = 121; // This is an integer stored on the stack in memory!

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);

    printf("The value of i is %d\n", j);
    printf("And its address is %p\n", (void *)&j);
}