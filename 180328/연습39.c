#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define 변수선언 int int1, int2; char ch;
#define 정수스캔 printf("두 개의 정수와 연산자 입력 ? "); scanf(" %d %d %c", &int1, &int2, &ch);
#define 결과출력 switch(ch){ case '%': printf("결과 : %d %c %d = %d\n", int1, ch, int2, int1 % int2); break; case '*': printf("결과 : %d %c %d = %d\n", int1, ch, int2, int1 * int2); break; case '+': printf("결과 : %d %c %d = %d\n", int1, ch, int2, int1 + int2); break; case '-': printf("결과 : %d %c %d = %d\n", int1, ch, int2, int1 - int2); break; case '/': printf("결과 : %d %c %d = %d\n", int1, ch, int2, int1 / int2); break; default: printf("오류 발생;");}
void main(){
	변수선언
	정수스캔
	결과출력
}