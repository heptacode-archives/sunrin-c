#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char name[3][20];
	int age[3];
	for (int i = 0; i < 3; i++){
		printf("%d��° �̸� �Է�: ", i + 1); scanf("%s", name[i]);
		printf("���� �Է�:"); scanf("%d", &age[i]);
	}
	puts("== ������ ==");
	for (int i = 0; i < 3; i++){
		printf("%d��° �̸�: %s,����:%d\n", i + 1, name[i], age[i]);
	}
	return 0;
}