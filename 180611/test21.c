#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	char name[3][21];
	for (int i = 0; i < 3; i++){
		printf("%d��° �̸� �Է� > ", i + 1);
		gets(name[i]);
	}
	for (int i = 0; i < 3; i++)
		puts(name[i]);
}