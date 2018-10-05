#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define 변수선언 int h, m;
#define 시각스캔 scanf(" %d %d", &h, &m);
#define 계산 if (m - 30 >= 0) m -= 30; else { h -= 1; m += 30; }
#define 결과출력 printf("%d %d\n", h, m);
void main(){
	변수선언
	시각스캔
	계산
	결과출력
}