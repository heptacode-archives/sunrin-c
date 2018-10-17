#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int a, b, n, sum = 1, i;
	printf("운동장의 개수(n): "); scanf(" %d", &n);
	printf("운동장 3개의 가로, 세로를 차례로 입력: ");
	for (i = 0; i < n; i++) {
		scanf(" %d %d", &a, &b);
		sum *= a * b;
		if (sum > a * b)
			sum = a * b;
	}
	printf("가장 큰 운동장의 넓이는 %d입니다.", sum);
}