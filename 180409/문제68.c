#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
void main(){
	int std, sco, best = INT_MAX, worst = INT_MIN;
	printf("�л���: "); scanf(" %d", &std);
	printf("����: ");
	for (int i = 0; i < std; i++){
		scanf(" %d", &sco);
		if (sco > best)
			best = sco;
		if (sco < worst)
			worst = sco;
	}
	printf("1���� %d��, ", best); printf("�õ��� %d���̴�.", worst);
}