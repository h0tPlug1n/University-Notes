#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x, double y) { return pow(x, 2) + pow(y, 2); }

double eulerVal(double x, double y, double step, double X) {
    int n = ( X - x ) / step + 1;

    while (n--) {
        y += step * f(x, y);
        x += step;
    }

    return y;
}

int main() {

    printf("Ans: %.10lf", eulerVal(0, 0, 0.05, 0.15));

    return 0;
}