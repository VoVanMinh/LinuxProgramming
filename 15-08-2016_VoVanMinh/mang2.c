#include<stdio.h>
#include<stdlib.h>
void main(){
	float *mang;
	mang = (float*) malloc(5*sizeof(float));
	for(int i = 0; i < 5; i++){
		printf("Nhap vao phan tu thu %d: ", (i+1));
		scanf("%f", (mang + i));
	}
	printf("Mang vua nhap la: ");
	for(int i = 0; i < 5;i++){
		printf("%f  ", *(mang + i));
	}
	printf("\n");
	free(mang);
}
