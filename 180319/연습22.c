#include<stdio.h>
#pragma warning(disable: 4996) // scanf ���� �˻� �ǳʶٱ�

void main(){
	char ch, dep[40];
	printf("�Ҽ� �Է� ? ");
	gets(dep);
	printf("���� �Է� ? ");
	scanf(" %c", &ch);
	printf("�Է� ���� = %c\n", ch);
	printf("�Ҽ� = %s\n", dep);
}