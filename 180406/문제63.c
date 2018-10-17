#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int h, i, j, k;
	printf("≥Ù¿Ã : "); scanf(" %d", &h);
	for (i = 0; i < h; i++){
		for (k = h - 1; k > i; k--)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}