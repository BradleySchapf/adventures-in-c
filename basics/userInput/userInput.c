#include <stdio.h>
#include <string.h>

int main() {
    char firstName[25];
    char fullName[30];
    int age;

    printf("What's your name?\n");
    scanf("%s", firstName);

    getchar();

    printf("What's your full name?\n");
    fgets(fullName, 30, stdin);
    fullName[strlen(fullName) - 1] = '\0';

    printf("how old are you?\n");
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old!", fullName, age);

    return 0;
}