#include<stdio.h>
#define ANS 'y'
int main(){
	char yn;
	printf("Bay gio la buoi chieu phai ko? y or n: ");
	scanf("%c", &yn);
	
	//if(strcmp(yn, "yes"))  //de so sanh 2 chuoi
	if(yn == 'y' || yn == 'Y'){
		printf("Chao buoi chieu!\n");
	}
	else
		printf("Oh, no!\n");
	
	if(yn == ANS){
		printf("Good afternoon!\n");
	}
}
