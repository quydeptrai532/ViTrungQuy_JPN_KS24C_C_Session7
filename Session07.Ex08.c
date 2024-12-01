#include<stdio.h>

int main(){
	int rows,cols;
    int i,j;
	printf("nhap so hang \n");
	scanf("%d",&rows);
		printf("nhap so cot \n");
	scanf("%d",&cols);
	int array[rows][cols];
	printf("nhap cac phan tu cua mang:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d", &array[i][j]);
			
		}
	}

	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
		printf("%d", array[i][j]);
			
		}
		printf("\n");
	}
	
}
