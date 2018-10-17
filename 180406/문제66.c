#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int a, b, tmp, i;
	printf("입력 : "); scanf(" %d %d", &a, &b);
	printf("출력 : ");
	if (a > b){ tmp = a; a = b; b = tmp; }
	for (i = a; i <= b; i++)
		printf("%d ", i);
}