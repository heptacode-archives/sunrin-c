#include<stdio.h>
void main(){
	int a, b, c, largest;
	printf("세 정수(a b c) ? ");
	scanf_s(" %d %d %d", &a, &b, &c);
	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	printf("큰 수 = %d\n", largest);
}