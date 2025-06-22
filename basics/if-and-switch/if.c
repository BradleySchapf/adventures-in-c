#include <stdio.h>

int main() {
    int age;

    printf("\nEnter your age: ");
    scanf("%id", &age);

    if (age >= 18) {
        printf("You get a credit card!");
    }
    else if (age == 0) {
        printf("brother you were just born, no credit card for another 18 years!");
    }
    else if (age < 0) {
        printf("Man you're not even born yet :/");
    }
    else {
        printf("You are not old enough for a credit card silly!");
    }

    return 0;
}