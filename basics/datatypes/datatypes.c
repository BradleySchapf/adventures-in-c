#include <stdio.h>
#include <stdbool.h>
#include <Kernel/stdbool.h>

int main() {
    
    //data types
    char a = 'C';                           // single character. %c
    char b[] = "Brad";                      // array of characters. commonly reffered to as a string. %s

    float c = 3.141592;                     // 4 bytes (32 bits of precision) 6-7 digits. %f
    double d = 3.141592653589793;           // 8 bytes (64 bits of precision) 15-16 digits. $lf       

    bool e = true;                          // 1 byte, true or false. %d  

    char f = 100;                         // 1 byte (-128 to +127). %d or %c (can display number or related character according to ASCII table.)
    unsigned char g = 255;                // 1 byte (0 to +255). %d or %c (no negative numbers, doubles the range of positive numbers.)

    short int h = 32767;                    // 2 bytes (-32,767 to + 32,767) %d
    unsigned short int i = 65535;           // 2 bytes (0 to +65,535) %d

    int j = 2147483647;                     // 4 bytes (-2,147,483,647 to +2,147,483,647) %d
    unsigned int k = 4294967295;            // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;              // 8 bytes (-9,223,372,036,854,775,807 to +9,223,372,036,854,775,807) %lld
    unsigned long long int m = 18446744073709551615U;   // 8 bytes (0 to 18 quintillion) %llu

    printf("%c is the third letter of the alphabet\n", a);
    printf("%s is my name.\n", b);
    printf("%f is a float\n", c);
    printf("while %0.15lf is a double!\n", d);
    printf("this statement is %d\n", e);
    printf("this char %d is mapped to the ASCII character %c", f, f);
    printf("this is a short int: %d\n", h);
    printf("Unsigned short ints are twice as big, but don't do negative! %d\n", i);
    printf("this is technically a long int but we just write int: %d\n", j);
    printf("an unsigned long int... %u still twice as big as its counterpart\n", k);
    printf("a long long int: %lld, seldomly used.\n", l);
    printf("The unsigned long long int, the largest int possible: %llu", m);

    return 0;
}