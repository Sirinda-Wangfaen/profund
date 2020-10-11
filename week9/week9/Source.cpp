#include<stdio.h>

int main() {
    int matrix[50][50];
    int x, y, i, j, space=0;
    scanf_s("%d %d", &x, &y);
    space += y;
    if (x > 0 && y > 0) {
        printf("Enter %d numbers : ", x * y);
        for (i = 0; i < x; i++) {
            for (j = 0; j < y; j++) {
                scanf_s("%d", &matrix[i][j]);
            }
        }
        printf("Matrix %d x %d : \n", x, y);
        for (i = 0; i < x; i++) {
            for (j = 0; j < y; j++) {
                printf("%d ", matrix[i][j]);
                if (j == space-1) {
                    printf("\n");
                }
            }
        }
    }
    else {
        printf("Error");
    }
    return 0;
}