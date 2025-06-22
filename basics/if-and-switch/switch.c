#include <stdio.h>

int main() {
    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("The very best!");
            break;
        case 'B':
            printf("Pretty Good!");
            break;
        case 'C':
            printf("That's alright.");
            break;
        case 'D':
            printf("That's not looking too good.");
            break;
        case 'F':
            printf("Get some help son.");
            break;
        default:
            printf("Grade not recognized.");
            break;
    }

    return 0;
}