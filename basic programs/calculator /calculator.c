#include <stdio.h>
#include <math.h>

void circumferenceCalc();
void basicCalc(int selection);
void numberSelection(double *num1, double *num2);
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

        if (selection > 0 && selection < 6) {
            basicCalc(selection);
        } else {
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

void basicCalc(int selection) {
    double num1;
    double num2;
    double result;

    switch (selection) {
        case 1:
            printf("Addition selected... \n");
            numberSelection(&num1, &num2);
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            printf("Subtraction selected... \n");
            numberSelection(&num1, &num2);
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3: 
            printf("Multipication selected... \n");
            numberSelection(&num1, &num2);
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4: 
            printf("Division selected... \n");
            numberSelection(&num1, &num2);
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            break;
        case 5:
            circumferenceCalc();
            break;
        default:
            printf("An unexpected error occured.\n");
    };
}

void numberSelection(double *num1, double *num2) {
    printf("Enter the first number: ");
    scanf("%lf", num1);

    printf("Great! Now enter the second number: ");
    scanf("%lf", num2);

    printf("Calculating...\n");
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