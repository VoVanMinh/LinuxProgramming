#include<stdio.h>
void nhapNS(){
        int ng, th, nam;

	printf("Nhap vao ngay sinh cua ban: ");
        scanf("%d", &ng);
	
	printf("Nhap vao thang sinh cua ban: ");
        scanf("%d", &th);


        printf("Nhap vao nam sinh cua ban: ");
        scanf("%d", &nam);

        printf("---------Ngay sinh cua ban la %d/%d/%d\n", ng, th, nam);
}

