#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int x, y, n, i, j, k;
	printf("�ʺ�(x): "); scanf(" %d", &x);
	printf("����(y): "); scanf(" %d", &y);
	printf("����(n): "); scanf(" %d", &n);
	for (k = 0; k < n; k++){
		for (j = 0; j < y; j++){
			for (i = 0; i < x; i++)
				printf("*");
			printf("\n");
		}
		printf("\n");
	}
}