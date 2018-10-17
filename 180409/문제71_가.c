#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, i;
	printf("≥Ù¿Ã(n): "); scanf(" %d", &n);
	while(n--){
		for (i = 0; i < n; i++)
			printf(" ");
		printf("*\n");
	}
}