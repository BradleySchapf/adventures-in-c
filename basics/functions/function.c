#include <stdio.h>

void happyBirthday() {
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear ... YOU!");
    printf("\nHappy birthday to you!\n");
}

void happyBirthdayGreeting(int age, char name[]) {
    printf("\nHappy birthday dear %s!", name);
    printf("\nyou are %d", age);

}

// returns a double
double squared(int num) {
    return num * num;
}

int main () {
    happyBirthday();
    happyBirthday();
    happyBirthday();

    happyBirthdayGreeting(25, "Brad");

    return 0;
}