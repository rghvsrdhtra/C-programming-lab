#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows for matrix 2: ");
    scanf("%d", &rows2);

    printf("Enter the number of columns for matrix 2: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols2];

    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
