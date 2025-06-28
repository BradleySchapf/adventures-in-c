#include <stdio.h>

// Function prototype:
// Declaring a function w/o a body, before main()
// ensures calls to a function use the correct arguments (essentially type safety)

void hello(char[], int);

int main() {

    char name[] = "Brad";
    int age = 25;

    hello(name, age);

    return 0;
}

void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old.", age);
}
