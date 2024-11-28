#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int max = arr[0];
    int min = arr[0];
    int i;
    for ( i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("phan tu lon nhat trong mang la: %d\n", max);
    printf("phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}
