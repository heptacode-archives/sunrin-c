#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char a[100];
	int cnt = 0;
	printf("���ڿ� �Է� : ");
	gets(a);
	for (int i = 0; i < 100 && a[i] != NULL; i++) cnt++;
	printf("��� 1 > ");
	for (int i = 0; i <= cnt && a[i] != NULL; i++) printf("%c", a[i] + 2);
	printf("\n��� 2 > ");
	for (int i = 0; i <= cnt && a[i] != NULL; i++) printf("%c", a[i] * 7 % 80 + 48);
	printf("\n");
	return 0;
}
