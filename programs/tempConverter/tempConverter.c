#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nEnter the unit of temperature (F or C): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("Enter the temperature in celsius: ");
        scanf("%f", &temp);

        temp = (temp * 9 / 5) + 32;

        printf("The temperature in farenheit is %2.1f", temp);
    }
    else if (unit == 'F') {
        printf("Enter the temperature in farenheit: ");
        scanf("%f", &temp);

        temp = ((temp - 32) * 5) / 9; 

        printf("The temperature in celsius is %2.1f", temp);
    }
    else {
        printf("%c is not a valid unit of measurement!", unit);
    }

    return 0;
}