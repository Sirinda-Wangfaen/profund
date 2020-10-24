#include <stdio.h>
void matrixInput(int mat[][3]);
void matrixPrint(int mat[][3]);
void matrixMultiply(int mat1[][3], int mat2[][3], int res[][3]);

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int multiplyResult[3][3];

    printf("Enter elements in first matrix of size 3x3\n");
    matrixInput(matrix1);

    printf("Enter elements in second matrix of size 3x3\n");
    matrixInput(matrix2);

    matrixMultiply(matrix1, matrix2, multiplyResult);

    printf("Product of both matrices is : \n");
    matrixPrint(multiplyResult);

    return 0;
}

void matrixInput(int mat[][3])
{
    int row, col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf_s("%d", (*(mat + row) + col));
        }
    }
}

void matrixPrint(int mat[][3])
{
    int row, col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d ", *(*(mat + row) + col));
        }

        printf("\n");
    }
}

void matrixMultiply(int mat1[][3], int mat2[][3], int res[][3])
{
    int row, col, i;
    int sum;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            sum = 0;
            for (i = 0; i < 3; i++)
            {
                sum += (*(*(mat1 + row) + i)) * (*(*(mat2 + i) + col));
            }
            *(*(res + row) + col) = sum;
        }
    }
}