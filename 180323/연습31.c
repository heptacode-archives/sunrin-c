#include<stdio.h>
void main(){
	int a, b, c, largest;
	printf("�� ����(a b c) ? ");
	scanf_s(" %d %d %d", &a, &b, &c);
	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	printf("ū �� = %d\n", largest);
}