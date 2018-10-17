#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 모범 답안
void main(){
	int a, b, c, n;
	scanf(" %d %d %d %d", &a, &b, &c, &n);
	for (int i = 0; i <= %d; i++){
		a = a * b + c;
	}
	printf("%d번째 항의 값은 %d 입니다.\n", n, a);
}

/* 갓코더의 코드
void main(){
	int a, b, c, n;
	scanf(" %d %d %d %d", &a, &b, &c, &n);
	for (int i = 0; i < n - 1; i++){
		a = a * b + c;
	}
	printf("%d번째 항의 값은 %d 입니다.\n", n, a);
}
*/