#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int a, b, n, sum = 1, i;
	printf("����� ����(n): "); scanf(" %d", &n);
	printf("��� 3���� ����, ���θ� ���ʷ� �Է�: ");
	for (i = 0; i < n; i++) {
		scanf(" %d %d", &a, &b);
		sum *= a * b;
		if (sum > a * b)
			sum = a * b;
	}
	printf("���� ū ����� ���̴� %d�Դϴ�.", sum);
}