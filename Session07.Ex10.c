#include<stdio.h>

int main(){
	int i,n,c,x=0;
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
	int array[n];
	printf("nhap cac phan tu cua mang:\n");
	for(i=0;i<n;i++){
		printf("phan tu thu %d cua mang:\n",i+1);
		scanf("%d",&array[i]);
	}
	printf("cac phan tu la so nguyen to la:\n");
	for(i=0;i<n;i++){
		x=0;
		for(c=2;c<array[i];c++){
			if(array[i]%c==0){
				x=1;
			}
		}
		if(x==0&&array[i]>1){
			printf("%d",array[i]);
		}
	}
	return 0;
}
