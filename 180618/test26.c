#include<stdio.h>
#include<string.h>
void main(){
	char str1[100], str2[100], tmp[100];
	printf("���ڿ�1 �Է� > ");
	gets(str1);
	printf("���ڿ�2 �Է� > ");
	gets(str2);
	strcpy(tmp, str1);
	strcpy(str1, str2);
	strcpy(str2, tmp);
	puts("========== ��ȯ �� ���ڿ� ��� ==========");
	printf("���ڿ�2 ��� > %s\n", str1);
	printf("���ڿ�1 ��� > %s\n", str2);
}