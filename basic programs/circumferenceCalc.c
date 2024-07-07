#include <stdio.h>
#include <math.h>

int main() {
    int radius;
    float circumference;

    printf("Welcome to the Circle Circumference Calculator!\n Please enter the radius (whole number) of your circle:");
    scanf("%d", &radius);

    printf("calculating...\n");
    circumference = 2 * (M_PI * radius);
    printf("\nThe Circumference is: %lf", circumference);
    
    return 0;
}