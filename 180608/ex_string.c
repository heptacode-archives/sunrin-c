#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(){
	char s[] = "123456789";
	/*for (int i = 0; i < strlen(s); i++)
		printf("%c ", s[i]);*/
	/*char t[10];
	char u[20] = "00000";
	strcpy(t, s);
	puts(t);
	strcat(u, t);
	printf("u: %s\n", u);*/
	char ans[3] = "��";
	char inp[10];
	printf("�Է�: ");
	gets(inp);
	printf("strcmp ���: %d\n", strcmp(ans, inp));
	return 0;
}
