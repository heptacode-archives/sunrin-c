#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	char str[100], find;
	int i;
	printf("���ڿ� �Է� : ");
	gets(str);
	printf("ã������ ���� �Է� : ");
	scanf("%c", &find);
	for (i = 0; str[i] != find; i++){}
	printf("%c �� ��ġ : %d\n", find, ++i);
}