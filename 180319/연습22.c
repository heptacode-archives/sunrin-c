#include<stdio.h>
#pragma warning(disable: 4996) // scanf 보안 검색 건너뛰기

void main(){
	char ch, dep[40];
	printf("소속 입력 ? ");
	gets(dep);
	printf("문자 입력 ? ");
	scanf(" %c", &ch);
	printf("입력 문자 = %c\n", ch);
	printf("소속 = %s\n", dep);
}