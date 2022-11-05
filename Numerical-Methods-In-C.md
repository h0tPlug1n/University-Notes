# Numerical-Method-in-C
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/Formulae.png)
# `Bisection Method`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/bisection.png)
```c
#include<stdio.h>
#include<math.h>

float f(float x){
	return (x*x*x - 4*x - 9);
}

void bisect(float *x, float a, float b, int *itr){
	*x = (a+b)/2;
	++(*itr);
	printf("Iteration no. %3d X = %7.5f\n",*itr, *x);
}

int main(){
	int itr = 0, maxitr;
	float x, a, b, aerr, x1;
	printf("Enter the values of a, b, allowed error, max iteration: ");
	scanf("%f %f %f %d",&a, &b, &aerr, &maxitr);
	bisect(&x, a, b, &itr);

	do{
		if( f(a)*f(x) < 0){
			b=x;
		}else{
			a=x;
		}
		bisect(&x1, a, b, &itr);
		if( fabs(x1-x) < aerr ){
			printf("After %d iterations, root = %6.4f\n",itr,x1);
			return 0;
		}
		x=x1;
	}while( itr < maxitr );
	printf("Solution does not converge, Iterations not sufficient");
	return 1;
}
```

# `Regula Falsi Method`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/falseposition.png)
```c
#include<stdio.h>
#include<math.h>

float f(float x){
	return cos(x)-x*exp(x);
}

void regula(float *x, float x0, float x1, float fx0, float fx1, int *itr){
	*x = x0 - ((x1-x0)/(fx1-fx0))*fx0;
	++(*itr);
	printf("Iteration No. %d X = %7.5f\n",*itr, *x);
}

int main(){
	int itr=0, maxitr;
	float x0, x1, x2, x3, aerr;
	printf("Enter the values for x0, x1, allowed errors, max iterations: ");
	scanf("%f %f %f %d",&x0,&x1,&aerr,&maxitr);
	regula(&x2,x0,x1,f(x0),f(x1), &itr);
	do{
		if(f(x0)*f(x2)<0){
			x1=x2;
		}else{
			x0=x2;
		}
		regula(&x3, x0, x1, f(x0), f(x1), &itr);
		if(fabs(x3-x2)<aerr){
			printf("After %d iterations, root = %6.4f\n",itr,x3);
			return 0;
		}
		x2=x3;
	}while(itr<maxitr);
	printf("Solution does not converge, iterations not sufficient\n");
	return -1;
}
```

# `Newton-Raphson`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/newton-raphson.png)
```c
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define f(x) cos(x)-x*exp(x)
#define g(x) -sin(x)-x*exp(x)-exp(x)

int main(){
  float x0=0.5, x1, g0, f0, e=0.00001;
  f0=f(x0);
  g0=g(x0);
  int itr=0;
  while(1){
    itr++;
    printf("At iteration %d X = %f\n",itr,x1);
    x1 = x0-(f0/g0);
    if(fabs(x1-x0)<e){
      printf("\nRoot at x: %f",x1);
      exit(0);
      
    }else{
      x0=x1;
      f0=f(x0);
      g0=g(x0);
    }
  }
  return 0;
}
```

# `Gauss Elimination`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/gauss_elimination_algo.png)
```c
// Gauss elimination method to solve the following equation

//  2x - 3y + z = -1

// x + 4y - 3z = 0

// 3x - y + 4z = 13

  

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

  

int main() {

    int rows = 3;

    int cols = 4;

    double mat[3][4] = {

        { 2, -3,  1, -1 },

        { 1,  4, -3,  0 },

        { 3, -1,  4, 13 }

    };

  

    printf("Before GE\n");

    for (int i = 0; i < rows; i++, printf("\n"))

        for (int j = 0; j < cols; j++) printf("%.2lf\t", mat[i][j]);

  

    double c;

    // iterate the rows

    for (int i = 0; i < rows; i++) {

        // For each subsequent rows make the ith element below ith row's ith element 0 using row transformation

        for (int j = i+1; j < rows; j++) {

            // Subtract the row elements to make the ith element zero

            c = mat[j][i] / mat[i][i];

            for (int k = 0; k < cols; k++) {

                mat[j][k] = mat[j][k] - (c * mat[i][k]); // Row Operation b

            }

        }

    }

  

    printf("\nAfter GE\n");

    for (int i = 0; i < rows; i++, printf("\n"))

        for (int j = 0; j < cols; j++) printf("%.2lf\t", mat[i][j]);

  
  

    // Calculating the roots

    double roots[3];

    for (int i = 0; i < rows; i++) roots[i] = mat[i][cols-1];

  

    for (int i = rows - 1; i > -1; i--) {

        for (int j = 0; j < rows; j++) {

            if (j == i) continue;

            roots[i] -= mat[i][j] * roots[j];

        }

        roots[i] /= mat[i][i];

    }

  

    printf("\nRoots\n");

    for (int i = 0; i < rows; i++)

        printf("Root x%d: %.2lf\n", i+1, roots[i]);

  

    // RootReturn roots = getRoots(mat, rows, cols);

}
```

# `Trapezoidal Method`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/trapezoidal.png)
```c
/* Trapezoidal rule.*/
#include <stdio.h>
float y(float x)
{
 return 1/(1+x*x);
}
int main()
{
 float x0,xn,h,s;
 int i,n;
 puts("Enter x0,xn,no. of subintervals");
 scanf ("%f %f %d",&x0,&xn,&n);
 h = (xn-x0)/n;
 s = y(x0)+y(xn);
 for (i=1;i<=n-1;i++){
   s += 2*y(x0+i*h);
 }
 printf ("Value of integral is % 6.4f\n",
 (h/2)*s);
}
```

# `Gauss Jordan`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/Gauss_Jordan_algo.png)
```c
#include <stdio.h>
#define N 3 
int main()
{
 float a[N][N+1],t;
 int i,j,k;
 printf("Enter the elements of the augmented matrix rowwise\n");
 for (i=0;i<N;i++)
 for (j=0;j<N+1;j++)
 scanf("%f",&a[i][j]);
 /* now calculating the values of x1,x2,....,xN */
 for (j=0;j<N;j++)
 for (i=0;i<N;i++)
 if (i!=j)
 {
 t = a[i][j]/a[j][j];
 for (k=0;k<N+1;k++)
 a[i][k] -= a[j][k]*t;
 }
 /* now printing the diagonal matrix */
 printf("The diagonal matrix is:-\n");
 for (i=0;i<N;i++)
 {
 for (j=0;j<N+1;j++)
 printf("%9.4f",a[i][j]);
 printf("\n");
 }
 /* now printing the results */
 printf("The solution is:- \n");
 for (i=0;i<N;i++)
 printf("x[%3d] = %7.4f\n",
 i+1,a[i][N]/a[i][i]);
}
```

# `Simpsons 1/3 Rule`
- I = h/3[X + 2E + 4O] {I1=Integration_formuala, h=step_size, X=first_ordinate+last_ordinate, E=even_ordinates, O=odd_ordinate}
- To calculate Error = Value_got_from_Integration - Value_got_from_simpsons_rule
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/Simpson_algo.png)
```c
#include<stdio.h>
#include<math.>
double f(double x){
	return (x*x)/(1+(x*x));
}
int main(){
	int a=0, b=0, n=20, k;
	double result, h, x, esum=0.0. osum=0.0, j;
	h=fabs(b-a)/n;
	for(k=1; k<=n-1; k++){
		if(k%2==0){
			x=a+k*h;
			esum+=f(x);
		}else{
			x=a+k*h;
			osum+=f(x);
		}
	}
	result = (h/3)*(f(a)+f(b)+4*osum+2*esum);
	printf("The value of n is: %d\n",n);
	printf("The required result: %lf\n",result);
}
```

# `Euler Method`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/euler%20method.png)
- Formula: Yn = Yn-1 + h*f(Xn-1, Yn-1)
```c
#include<stdio.h>
#include<math.h>
#define f(x,y) x*x+y*y
int main(){
	int i;
	float x0,y0,n,h,x,y;
	printf("Enter the initial value x0, y0: ");
	scanf("%f %f",&x0,&y0);
	printf("Enter the value of x for which we need to find out y: ");
	scanf("%f",&x);
	printf("Enter the step size: ");
	scanf("%f",&h);
	n=(x-x0)/h;
	printf("x0 = %f y = %f",x0,y0);
	for(i=0; i<n; i++){
		y=y+h*f(x0,y0);
		x=x0+h;
		printf("%f %f",x,y);
		y0=y;
		x0=x;
	}
	printf("The value of y: %f",y);
}
```

# `Runge-Kutta Method`
![](https://github.com/h0tPlug1n/Numerical-Method-in-C/blob/main/RK_Method-algo.png)
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x, double y) { return (x - y) / (x + y); }
double RungeKutta(double x, double y, double h, double xa) {
    int n = (int)round((xa-x)/h);
    if (n < 0) return 0;
    double k1, k2, k3, k4;
    while (n--) {
        k1 = h * f(x, y);
        k2 = h * f(x + h/2, y + k1/2);
        k3 = h * f(x + h/2, y + k2/2);
        k4 = h * f(x + h, y + k3);
        x += h;
        y += (k1 + k4 + 2*(k3 + k2))/ 6;
    }
    return y;
}

int main() {
    double x0 = 0;
    double y0 = 1;
    double stepSize = 0.01;
    double xa = 1;
    printf("y(%.1lf) = %.9lf\n", xa, RungeKutta(x0, y0, stepSize, xa));
    return 0;
}
```
