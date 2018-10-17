#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int i, j;
	for (i = 0; i <= 3; i++){
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}