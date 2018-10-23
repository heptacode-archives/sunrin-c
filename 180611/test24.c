#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void main(){
	char story[10000] = { 0 }, input[10000];
	while (1){
		printf("\n이야기를 입력하세요 > ");
		gets(input);
		if (strcmp(input, "끝") == 0) break;
		strcat(story, input);
		printf("현재까지의 이야기 > %s", story);
	}
}