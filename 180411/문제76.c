#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, i, j;
	printf("≥Ù¿Ã(n): "); scanf(" %d", &n);
	for (i = 0; i < n - 3; i++){
		for (j = 0; j <= i; j++)
			printf("*", j);
		printf("\n");
	}
	for (i = 0; i < n - 4; i++){
		for (j = n - 4; j > i; j--)
			printf("*");
		printf("\n");
	}
}