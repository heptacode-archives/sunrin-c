#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int i, j;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++)
			printf("*", j);
		printf("\n");
	}
}