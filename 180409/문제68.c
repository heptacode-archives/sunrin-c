#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
void main(){
	int std, sco, best = INT_MAX, worst = INT_MIN;
	printf("학생수: "); scanf(" %d", &std);
	printf("점수: ");
	for (int i = 0; i < std; i++){
		scanf(" %d", &sco);
		if (sco > best)
			best = sco;
		if (sco < worst)
			worst = sco;
	}
	printf("1등은 %d점, ", best); printf("꼴등은 %d점이다.", worst);
}