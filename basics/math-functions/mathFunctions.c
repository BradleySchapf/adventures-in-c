#include <stdio.h>
#include <math.h> //include this header file to use the math functions

int main() {

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14); // round to the nearest whole number
    int D = ceil(3.14); // always round up
    int E = floor(3.14); // always round down
    double F = fabs(-100.00); //find the absolute value of a number 
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("The square root of 9 is: %.1lf\n", A);
    printf("2 to the power of 4 is: %lf\n", B);
    printf("3.14 rounded to the nearest whole number is: %d\n", C);
    printf("3.14 round up is: %d\n", D);
    printf("3.14 round down is: %d\n", E);
    printf("The absolute value of -100 is: %lf\n", F);
    printf("log(3) is: %lf\n", G);
    printf("the trig functions of sin, cos, and tan for 45 are: %lf, %lf, %lf\n", H, I, J);

    return 0;
}