#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("nhap lan luot 5 phan tu cua mang:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("cac phan tu trong mang la:\n");
    for (i = 0; i < 5; i++) {
        printf("phan tu thu %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
