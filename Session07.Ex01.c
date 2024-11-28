#include <stdio.h>

int main() {
	int i;
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("cac phan tu trong mang la:\n");
    for ( i = 0; i < length; i++) {
    printf("phan tu thu %d: %d\n", i, arr[i]);
    }
    printf("do dài cua mang là: %d\n", length);
   return 0;
}
