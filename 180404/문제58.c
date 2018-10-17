#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int w, h, i, j;
	printf("가로 : "); scanf(" %d", &w);
	printf("세로 : "); scanf(" %d", &h);
	for (i = 0; i < h; i++){
		for (j = 0; j < w; j++)
			printf("*", j);
		printf("\n");
	}
}