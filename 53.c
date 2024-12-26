#include <stdio.h>

int main() {
    int m, n, p, q;

    // Input dimensions of matrix A (m x n) and matrix B (p x q)
    printf("Enter number of rows and columns of matrix A (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Enter number of rows and columns of matrix B (p x q): ");
    scanf("%d %d", &p, &q);

    // If the number of columns in A is not equal to the number of rows in B, multiplication is not possible
    if (n != p) {
        printf("Matrix multiplication is not possible. Number of columns in A must be equal to number of rows in B.\n");
        return 0;
    }

    // Declare matrices A, B, and the result matrix
    int A[m][n], B[p][q], result[m][q];

    // Input matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the result matrix to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result
    printf("Resultant matrix after multiplication is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

