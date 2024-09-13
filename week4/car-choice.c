/******************************************************************************
 * File: calculator.c
 * 
 * Author: [STUDENT NAME]
 * Email: [STUDENT EMAIL]
 * 
 * This program creates different car models and make a decision on the car types based on some pre-defined conditions
 * 
 * Copyright © 2024. All rights reserved.
 *****************************************************************************/

#include <stdio.h>
#include <math.h> // Used by the pow function

// Struct to represent an operation
struct Car
{
    char *name;
    char *color;
    float price;
    int mileage;
    float mpg;
    int year;
};

// Function prototypes
void set_price (struct Car *c, float price);
void print_car (struct Car *c);
void inspect_car (struct Car *c);

int main() {
    struct Car saturn = {.name="Saturn SL/2", .color="red", .price=12000, .mileage=30000, .mpg=30, .year=2002};
    struct Car corolla_2019 = {.name="Corolla", .color="white", .price=20000, .mileage=10000, .mpg=38, .year=2019};
    struct Car f_150_2022 = {.name="F-150", .color="black", .price=28500, .mileage=60000, .mpg=20, .year=2022};
    struct Car grand_cherokee_2015 = {.name="Jeep Grand Cherokee", .color="black", .price=15000, .mileage=115000, .mpg=32, .year=2015};

    // Change the price of the F-150
    set_price(&f_150_2022, 30000);

    // print all 4 cars
    print_car(&saturn);
    print_car(&corolla_2019);
    print_car(&f_150_2022);
    print_car(&grand_cherokee_2015);

    // inspect all 4 cars
    inspect_car(&saturn);
    inspect_car(&corolla_2019);
    inspect_car(&f_150_2022);
    inspect_car(&grand_cherokee_2015);

    return 0;
}

// Functions implementations
// This function sets/updates the price of a car
void set_price (struct Car *c, float price){
    c->price = price; // Change the price field in the memory location pointed to by c->price
}

// This function prints all the information about a car
void print_car (struct Car* c){
    
}

/*
Print "Pass" if:
the price is between 15000 and 25000
AND
the mpg is strictly greater than 30
AND
the year is strictly greater than 2016

else print "Fail"
*/

void inspect_car (struct Car* c){
    
}