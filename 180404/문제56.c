#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int i, j;
	printf("   ¦¢   1   2   3   4   5   6   7   8   9\n----------------------------------------\n");
	for (i = 2; i <= 9; i++){
		printf("%d  ¦¢", i);
		for (j = 1; j <= 9; j++)
			printf("  %2d", i * j);
		printf("\n");
	}
}