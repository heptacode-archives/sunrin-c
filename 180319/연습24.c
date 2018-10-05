#include<stdio.h>
#pragma warning(disable: 4996) // scanf 보안 검색 건너뛰기

void main(){
	char name[40], gender;
	double kor, eng, math;
	printf("이름 = ");
	scanf("%s", name);
	printf("성별 = ");
	scanf(" %c", &gender);
	printf("국어, 영어, 수학 = ");
	scanf(" %lf %lf %lf", &kor, &eng, &math);
	printf("총점 = %.0lf\n", kor + eng + math);
	printf("평균 = %.2lf\n", (kor + eng + math) / 3);
}