// Trapezoidal Method

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x) { return pow(x, 2) / ( 1 + pow(x, 2) ); }

int main() {
    
    int a = 0;
    int b = 4;
    int n = 20;
    int k;
    
    double result, h, j;
    double sum = 0.0;
    
    h = fabs(b - a) / n;
    j = a + (k * h);
    
    for (k = 1; k < n; k++)
        sum += f(a + k*h);
    
    result = h * ( f(a) + 2*sum + f(b) ) / 2;
    printf("Result : %5lf", result);
    
    return 0;
}