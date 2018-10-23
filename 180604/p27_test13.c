#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	char str[50], find;
	int i, c = 0;
	printf("문자열 입력 : ");
	gets(str);
	printf("찾으려는 문자 입력 : ");
	scanf("%c", &find);
	for (i = 0; str[i] && str[i] == find; i++) c++;
	printf("문자열에서 %c의 갯수 : %d", find, c);
}