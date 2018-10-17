#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int n, oddMax = 0, evenMax = 0;
	printf("ÀÔ·Â: ");
	for (int i = 0; i < 10; i++){
		scanf(" %d", &n);
		if (n % 2 != 0 && n > oddMax)	// È¦¼ö
			oddMax = n;
		if (n % 2 == 0 && n > evenMax)	// Â¦¼ö
			evenMax = n;
	}
	if (oddMax != 0)
		printf("È¦¼ö ÃÖ´ë°ª: %d\n", oddMax);
	if (evenMax != 0)
		printf("Â¦¼ö ÃÖ´ë°ª: %d\n", evenMax);
}