#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int m, i, j, k, l, cnt = 0;
	printf("Input: ");
	scanf(" %d", &m);
	for (i = 0; i <= m / 500; i++){
		for (j = 0; j <= m / 100; j++){
			for (k = 0; k <= m / 50; k++){
				for (l = 0; l <= m / 10; l++){
					if ((500 * i) + (100 * j) + (50 * k) + (10 * l)){
						printf("%d %d %d %d\n", i, j, k, l);
						cnt++;
					}
				}
			}
		}
	}
}