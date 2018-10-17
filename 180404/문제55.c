#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, i, j;
	printf("ют╥б: ");
	do{
		scanf("%d", &n);
	} while (n <= 1);
	for (i = 0; i < n / 5; i++){
		for (j = 1; j <= 5; j++){
			printf("%2d\t", i * 5 + j);
		}
		printf("\n");
	}
}