#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, oddMax = 0, evenMax = 0;
	printf("�Է�: ");
	for (int i = 0; i < 10; i++){
		scanf(" %d", &n);
		if (n % 2 != 0 && n > oddMax)	// Ȧ��
			oddMax = n;
		if (n % 2 == 0 && n > evenMax)	// ¦��
			evenMax = n;
	}
	if (oddMax != 0)
		printf("Ȧ�� �ִ밪: %d\n", oddMax);
	if (evenMax != 0)
		printf("¦�� �ִ밪: %d\n", evenMax);
}