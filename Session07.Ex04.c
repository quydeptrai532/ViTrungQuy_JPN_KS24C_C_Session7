#include <stdio.h>

int main() {
    int n,i;

    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("so phan tu phai lon hon 0\n");
        return 1;
    }

    int arr[n];

    printf("nhap lan luot cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("cac phan tu trong mang la:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
