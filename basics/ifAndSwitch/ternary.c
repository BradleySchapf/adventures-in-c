#include <stdio.h>

int findMax(double x, double y) {
    return x > y ? x : y;
}

int main() {
    findMax(5, 4);
}