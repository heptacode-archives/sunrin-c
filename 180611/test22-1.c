#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){
	char name[3][21];
	int a;
	for (int i = 0; i < 3; i++){
		printf("%d번째 이름 입력 > ", i + 1);
		gets(name[i]);
	}
	for (int i = 0; i < 3; i++){
		a = 0;
		for (int j = 0; name[i][j]; j++)
		if (name[i][j] != ' ') a++;
	}
	puts("== 결과 출력 ==");
	for (int i = 0; i < 3; i++)
		printf("%d번째 이름: %-20s 문자수: %d\n", i + 1, name[i], a);
}