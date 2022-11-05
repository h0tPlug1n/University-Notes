#include <stdio.h>
#include <math.h>

double f(double x) { return cos(x) - x*exp(x); }

double falsePosition(double a, double b, double e) {
    for (; f(a) * f(b) > 0; a--, b++);
    double x = ( a * f(b) - b * f(a) ) / (f(b) - f(a));
    if (f(x) == 0 || fabs(f(x)) < e) return x;
    if (f(a) * f(x) < 0) return falsePosition(a, x, e);
    if (f(x) * f(b) < 0) return falsePosition(x, b, e);
    return 0;
}

int main() {

    printf("Root : %lf", falsePosition(0, 0, 1e-6));

    return 0;
}