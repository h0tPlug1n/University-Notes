// Gauss elimination method to solve the following equation
//  2x - 3y + z = -1
// x + 4y - 3z = 0
// 3x - y + 4z = 13

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int rows = 3;
    int cols = 4;
    double mat[3][4] = {
        { 2, -3,  1, -1 },
        { 1,  4, -3,  0 },
        { 3, -1,  4, 13 }
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