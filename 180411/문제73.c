#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n = 0, i = 1, sum = 0;
	do {
		printf("%d��° �Է�: ", i); scanf(" %d", &n);
		if (n == 9999){
			printf("�հ�: %d\n���: %.2f", sum, (float)sum / (i - 1));
			break;
		}
		sum += n;
		i++;
	} while (n != 9999);
			
}