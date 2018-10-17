#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, i, j, k;
	printf("≥Ù¿Ã(n): "); scanf(" %d", &n);
	for (j = 1; j <= n - 3; j++){
		for (k = n - 4; k >= j; k--)
			printf(" ");
		for (i = 1; i <= j * 2 - 1; i++)
			printf("*");
		printf("\n");
	}
	for (j = 0; j < 4; j++){
		for (k = 0; k <= j; k++)
			printf(" ");
		for (i = j; i > 0; i--)
			printf("*");
		i -= 2;
		printf("\n");
	}
}
