#include<stdio.h>
#pragma warning(disable: 4996) // scanf ���� �˻� �ǳʶٱ�

void main(){
	char name[40], dep[40];
	int pay;
	printf("�̸� ? ");
	gets(name);
	printf("�Ҽ� ? ");
	gets(dep);
	printf("�뵷 ? ");
	scanf(" %d", &pay);
	printf("%s��(��) %s �л��̸�, �Ѵ� �뵷�� %d���̴�.\n", name, dep, pay);
}