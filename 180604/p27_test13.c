#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	char str[50], find;
	int i, c = 0;
	printf("���ڿ� �Է� : ");
	gets(str);
	printf("ã������ ���� �Է� : ");
	scanf("%c", &find);
	for (i = 0; str[i] && str[i] == find; i++) c++;
	printf("���ڿ����� %c�� ���� : %d", find, c);
}