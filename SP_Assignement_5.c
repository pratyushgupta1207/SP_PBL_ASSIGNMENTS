#include <stdio.h>

int main() {
    int a11, a12, a21, a22;
    int b11, b12, b21, b22;


    int sum11, sum12, sum21, sum22;
    int diff11, diff12, diff21, diff22;
    int prod11, prod12, prod21, prod22;
    int t11, t12, t21, t22;


    printf("Enter elements of first 2x2 matrix:\n");
    scanf("%d %d %d %d", &a11, &a12, &a21, &a22);

    
    printf("Enter elements of second 2x2 matrix:\n");
    scanf("%d %d %d %d", &b11, &b12, &b21, &b22);


    sum11 = a11 + b11; sum12 = a12 + b12;
    sum21 = a21 + b21; sum22 = a22 + b22;

    
    diff11 = a11 - b11; diff12 = a12 - b12;
    diff21 = a21 - b21; diff22 = a22 - b22;

    
    prod11 = a11*b11 + a12*b21; prod12 = a11*b12 + a12*b22;
    prod21 = a21*b11 + a22*b21; prod22 = a21*b12 + a22*b22;

    
    t11 = a11; t12 = a21;
    t21 = a12; t22 = a22;

    
    printf("Addition of matrices:\n");
    printf("%d %d\n", sum11, sum12);
    printf("%d %d\n", sum21, sum22);

    printf("Subtraction of matrices:\n");
    printf("%d %d\n", diff11, diff12);
    printf("%d %d\n", diff21, diff22);

    printf("Multiplication of matrices:\n");
    printf("%d %d\n", prod11, prod12);
    printf("%d %d\n", prod21, prod22);

    printf("\nTranspose of first matrix:\n");
    printf("%d %d\n", t11, t12);
    printf("%d %d\n", t21, t22);

    return 0;
}