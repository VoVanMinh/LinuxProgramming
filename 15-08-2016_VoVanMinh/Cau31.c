#include<stdio.h>
int main(){
	char yn;
	printf("Bay gio la buoi chieu phai ko? y or n: ");
	scanf("%c", &yn);
	switch(yn){
		case 'y':
		case 'Y':
			printf("Chao buoi chieu!\n");
			break;
		case 'n':
		case 'N':
			printf("Oh, no!\n");
			break;
		default: break;
	}
}
