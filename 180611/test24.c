#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main(){
	char story[10000] = { 0 }, input[10000];
	while (1){
		printf("\n�̾߱⸦ �Է��ϼ��� > ");
		gets(input);
		if (strcmp(input, "��") == 0) break;
		strcat(story, input);
		printf("��������� �̾߱� > %s", story);
	}
}