#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int i, j, k;
	for (i = 0; i <= 5; i++){
		for (k = 0; k < 5; k++)
			printf("*");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}