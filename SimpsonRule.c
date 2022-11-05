// Simpson's 1/3rd Rule

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x) { return pow(x,2) / ( 1 + pow(x, 2) ); }

double simpson(double lowerLim, double upperLim, double steps) {
    double h = ( upperLim - lowerLim ) / steps;
    double evenSum = 0;
    double oddSum  = 0;
    double x;
    for (int i = 1; i < steps; i++) {
        x = lowerLim + i * h;
        if (i%2) oddSum += f(x);
        else evenSum += f(x);
    }
    return h * (2*evenSum + 4*oddSum + f(lowerLim) + f(upperLim)) / 3;
}

int main() {

    double lowerLim = 0;
    double upperLim = 4;
    double steps = 20;
    printf("Result : %.7lf\n", simpson(lowerLim, upperLim, steps));

    return 0;
}