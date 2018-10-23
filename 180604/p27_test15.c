#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char a[100];
	int cnt = 0;
	printf("문자열 입력 : ");
	gets(a);
	for (int i = 0; i < 100 && a[i] != NULL; i++) cnt++;
	printf("대소문자 바꿔 출력 : ");
	for (int i = 0; i <= cnt && a[i] != NULL; i++){
		if (a[i] >= 'A' && a[i] <= 'Z') printf("%c", a[i] + 32);
		else if (a[i] >= 'a' && a[i] <= 'z') printf("%c", a[i] - 32);
	}
	return 0;
}
