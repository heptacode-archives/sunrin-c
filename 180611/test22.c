#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	char name[3][21];
	for (int i = 0; i < 3; i++){
		printf("%d��° �̸� �Է� > ", i + 1);
		gets(name[i]);
	}
	puts("== ��� ��� ==");
	for (int i = 0; i < 3; i++)
		printf("%d��° �̸�: %-20s ���ڼ�: %d\n", i + 1, name[i], strlen(name[i]));
}