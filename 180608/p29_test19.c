#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char s[11];
	int num= 0;
	printf("�������� DNA ���� �Է� : ");
	gets(s);
	for (int i = 0; s[i]; i++)
		num += (s[i] - '0');
	if (num % 7 == 4) printf("����\n");
	else printf("�Ϲ���\n");
	return 0;
}
