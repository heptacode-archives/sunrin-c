#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define 변수선언 int kor, eng, math;
#define 점수입력메시지출력 printf("국어 영어 수학 점수 ? ");
#define 점수스캔 scanf(" %d %d %d", &kor, &eng, &math);
#define 총점출력 printf("총점 = %d\n", kor + eng + math);
#define 평균출력 printf("평균 = %.2f\n", (float)(kor + eng + math) / 3);
#define 평점출력 printf("당신의 평점은 "); if ((float)(kor + eng + math) / 3 >= 90) printf("수"); else if ((float)(kor + eng + math) / 3 >= 80) printf("우"); else if ((float)(kor + eng + math) / 3 >= 70) printf("미"); else if ((float)(kor + eng + math) / 3 >= 60) printf("양"); else printf("가"); printf(" 입니다.");
void main(){
	변수선언
	점수입력메시지출력
	점수스캔
	총점출력
	평균출력
	평점출력
}