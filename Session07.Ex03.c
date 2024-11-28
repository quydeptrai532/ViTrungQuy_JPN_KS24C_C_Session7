#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int kiemtra = 0,i;

    printf("cac so chan trong mang la:\n");
    for ( i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            kiemtra = 1;
        }
    }

    if (kiemtra==0) {
        printf("mang khong chua so chan");
    }

    printf("\n");
    return 0;
}
