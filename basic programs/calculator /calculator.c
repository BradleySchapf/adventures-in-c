#include <stdio.h>
#include <math.h>

void circumferenceCalc();
void additionCalc();
void subractionCalc();
void multiplicationCalc();
void divisionCalc();
int quitInput();

int main() {
    int selection;

    while(1) {
        printf("\n*** Welcome to the Calculator Application! ***\n");
        printf("Select 1 for Addition\n");
        printf("Select 2 for Subraction\n");
        printf("Select 3 for Multipication\n");
        printf("Select 4 for Division\n");
        printf("Select 5 for Circle Circumference\n");
        printf("Your Selection: ");
        scanf("%d", &selection);

        switch (selection) {
            case 1:
                additionCalc();
                break;
            case 2:
                subractionCalc();
                break;
            case 3:
                multiplicationCalc();
                break;
            case 4:
                divisionCalc();
                break;
            case 5:
                circumferenceCalc();
                break;
            default:
            printf("The command was not recognized...\n");
            continue;
        }
            
        if ( quitInput() == 0) {
            printf("Exiting...");
            break;
        }
        else {
            printf("Returning to main menu...\n");
        }
    }
    
    return 0;
}

void additionCalc() {
    double num1;
    double num2;
    double result;

    printf("Addition selected... \nEnter the first number: ");
    scanf("%lf", &num1);

    printf("Great! Now enter the second number: ");
    scanf("%lf", &num2);

    printf("Calculating...\n");
    result = num1 + num2;

    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
}

void subractionCalc() {
    double num1;
    double num2;
    double result;

    printf("Subtraction selected... \nEnter the first number: ");
    scanf("%lf", &num1);

    printf("Great! Now enter the second number: ");
    scanf("%lf", &num2);

    printf("Calculating...\n");
    result = num1 - num2;

    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
}

void multiplicationCalc() {
    double num1;
    double num2;
    double result;

    printf("Multiplication selected... \nEnter the first number: ");
    scanf("%lf", &num1);

    printf("Great! Now enter the second number: ");
    scanf("%lf", &num2);

    printf("Calculating...\n");
    result = num1 * num2;

    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
}

void divisionCalc() {
    double num1;
    double num2;
    double result;

    printf("Division selected... \nEnter the first number: ");
    scanf("%lf", &num1);

    printf("Great! Now enter the second number: ");
    scanf("%lf", &num2);

    printf("Calculating...\n");
    result = num1 / num2;

    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
}

void circumferenceCalc() {
    double radius;
    double circumference;

    printf("Circle circumference Selected...\nEnter the radius of your circle: ");
    scanf("%lf", &radius);

    printf("calculating...\n");
    circumference = 2 * (M_PI * radius);
    printf("The Circumference is: %lf\n", circumference);
}

int quitInput() {
    int exitCode;

    printf("press 0 to exit, or press 1 to do more calculations: ");
    scanf("%d", &exitCode);

    return exitCode;
}