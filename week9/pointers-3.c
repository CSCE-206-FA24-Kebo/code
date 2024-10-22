#include <stdio.h>

void increment(int *p)  // note that it accepts a pointer to an int
{
    // 1- Get the contain of the box that p is pointing to
    // 2- Add 1 to that that value
    // 3- Store that value back in the same box

    *p = *p + 1;        // add one to the thing p points to
}

int main(void)
{
    int i = 10;
    int *j = &i;  // note the address-of; turns it into a pointer to i

    printf("And its address is %p\n", (void *)&j);
    printf("i is %d\n", i);        // prints "10"
    printf("i is also %d\n", *j);  // prints "10"

    increment(j);                  // j is an int*--to i
    // or
    //j ++;
    // or
    //j = j + 1;

    printf("i is %d\n", i);        // prints "11"!
    printf("And its address is %p\n", (void *)&j);
}


// *p = 12;  // CRASH or SOMETHING PROBABLY BAD. BEST AVOIDED.

str (ea), 12;


h = *p;

ld h, (ea)