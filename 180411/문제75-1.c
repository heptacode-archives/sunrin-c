#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, i, j, k;
	printf("≥Ù¿Ã(n): "); scanf(" %d", &n);
	for (j = 1; j <= n; j++){
		for (k = n - 1; k >= j; k--)
			printf(" ");
		if (k >= 9) k -= 10;
		for (i = 1; i <= j * 2 - 1; i++)
			printf("%d", k + 1);
		printf("\n");
	}
}