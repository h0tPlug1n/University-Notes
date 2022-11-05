// Bisection method to find root of f(x) = cos(x) + x*e^x;

#include <stdio.h>
#include <math.h>

double f(double x) { return cos(x) - (x * exp(x)); }

double bisectionMethod(double a, double b, double e) {
    for(; f(a) * f(b) > 0; a--, b++);
    double mid = (a + b) / 2;
    if ( f(mid) == 0 || ( fabs(f(mid)) < e ) ) return mid;
    if ( f(a) * f(mid) < 0 ) return bisectionMethod(a, mid, e);
    if ( f(mid) * f(b) < 0 ) return bisectionMethod(mid, b, e);
    return -1.0;
}

int main() {
    printf("ANS : %lf\n\n", bisectionMethod(0, 0, 1e-9));
    return 0;
}