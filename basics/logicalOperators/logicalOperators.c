#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators:   && (AND) checks if two conditions return true.
    //                      || (OR) checks if atleast one condition returns true.
    //                      !  (NOT) checks if the condition is not true (false).
    int temp = 32;
    bool sunny = false;

    if (temp > 20 && sunny) {
        printf("\nThe weather is good!");
    }
    else if (temp < 10 || temp > 35) {
        printf("\nThe weather is pretty bad");
    }
    else if (!sunny) {
        printf("\nThe weather is bad.");
    }
    else {
        printf("idk man");
    }

    return 0;
}