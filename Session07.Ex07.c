#include<stdio.h>

int main(){
	int i,n,kiemtra=0;
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
    int array[n];
    printf("nhap cac phan tu cua mang \n");
    for(i=0;i<n;i++){
    	kiemtra=0;
    	while(kiemtra==0){
    		printf("phan tu thu %d: ", i + 1);
            scanf("%d", &array[i]);
            if (array[i] % 2 != 0) {  
                kiemtra=1;
            } else {
                printf("phan tu phai la so le, vui long nhap lai!\n");
		}
	}
	
}
return 0;	
}
