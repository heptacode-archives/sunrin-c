#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	char str[100], find;
	int i;
	printf("문자열 입력 : ");
	gets(str);
	printf("찾으려는 문자 입력 : ");
	scanf("%c", &find);
	for (i = 0; str[i] != find; i++){}
	printf("%c 의 위치 : %d\n", find, ++i);
}