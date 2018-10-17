#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int x, y, n, i, j, k;
	printf("너비(x): "); scanf(" %d", &x);
	printf("높이(y): "); scanf(" %d", &y);
	printf("개수(n): "); scanf(" %d", &n);
	for (k = 0; k < y; k++){
		for (j = 0; j < n; j++){
			for (i = 0; i < x; i++)
				printf("*");
			printf(" ");
		}
		printf("\n");
	}
}