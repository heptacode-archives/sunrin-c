#include<stdio.h>
#pragma warning(disable: 4996) // scanf 보안 검색 건너뛰기

void main(){
	int width, height;
	printf("가로, 세로 = ");
	scanf(" %d %d", &width, &height);
	printf("둘레 = %d\n", (width + height) * 2);
	printf("넓이 = %d\n", width * height);
}