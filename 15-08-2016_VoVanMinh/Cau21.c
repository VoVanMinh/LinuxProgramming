#include<stdio.h>
#include<stdlib.h>
struct phanso{
	int mau;
	int tu;
};
typedef struct phanso PHANSO;
void nhap(PHANSO *x){
	printf("\tNhap vao tu so: ");
	scanf("%d", &x->tu);
	printf("\tNhap vao mau so: ");
	scanf("%d", &x->mau);
}
void xuat(PHANSO *x){
	printf("%d/%d  ", x->tu, x->mau);
}
int main(){
	PHANSO *p;
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	p = malloc (n * sizeof(int));
	for(int i = 0; i < n; i++){
		printf("-----Nhap phan so thu %d:\n", (i + 1));
		nhap(p+i);
	}
	printf("\n-------------------------------------------\n");
	printf("Mang cac phan so da nhap: ");
	for(int i = 0; i < n; i++){
		xuat(p+i);
	}
	printf("\n-------------------------------------------\n");
	free(p);
}
