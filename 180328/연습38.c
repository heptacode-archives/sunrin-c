#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define 변수선언 int n10, n1;
#define 정수스캔 printf("입력 : "); do { scanf(" %1d%1d", &n10, &n1); } while (n10 * 10 + n1 <= 1 && n10 * 10 + n1 >= 99);
#define 결과출력 printf("출력 : %d\n%s\n", (n1 * 10 + n10) * 2, ((n1 * 10 + n10) * 2 <= 50) ? "GOOD" : "OH MY GOD");
void main(){
	변수선언
	정수스캔
	결과출력
}