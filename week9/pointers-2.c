#include <stdio.h>

int main(void)
{
    int i;
    int *p;  // this is NOT a dereference--this is a type "int*"

    p = &i;  // p now points to i, p holds address of i

    i = 10;  // i is now 10
    *p = 20; // the thing p points to (namely i!) is now 20!!

    printf("i is %d\n", i);   // prints "20"
    printf("i is %d\n", *p);  // "20"! dereference-p is the same as i!

    int j = *p; // Dereference - Get the value in memory at the location pointed to by p
    printf("j is %d\n", j);

    *p = 30; // the thing p points to (namely i!) is now 20!!
    int k = *p;
    printf("i is %d\n", i);
    printf("j is %d\n", j);
    printf("k is %d\n", k);

    /*
    // Equivalence between a variable assignment (i=120) and pointer dereferencing

    // Option 1
    i = 120;

    // Option 2 - requirement: p must be a pointer!
    int *p = &i;  // p now points to i, p holds address of i (& is the address-of operator)
    *p = 120; // the thing p points to (namely i!) is now 120!!

    */

}