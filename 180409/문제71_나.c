#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, i, j;
	printf("????(n): "); scanf(" %d", &n);
	for (i = 0; i < n; i++){
		for (j = 0; j < i; j++)
		if ((i != j) || (i + j == n - 1))
			printf(" ");
		else
			printf("*");
		printf("\n");
	}
}