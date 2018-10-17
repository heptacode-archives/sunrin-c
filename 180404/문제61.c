#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int h, i, j;
	printf("≥Ù¿Ã : "); scanf(" %d", &h);
	for (i = 0; i <= h; i++){
		for (j = h; i < j; j--)
			printf("*");
		printf("\n");
	}
}