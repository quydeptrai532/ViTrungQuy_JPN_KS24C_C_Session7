#include <stdio.h>

int main() {
    int i,j,rows,cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    int array[rows][cols];

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Cac phan tu nam tren duong bien cua ma tran:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", array[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
