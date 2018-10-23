#include<stdio.h>
void arrCpy(double *arr1, const double *arr2, int length) {
	for (int i = 0; i < length; i++)
		// arr1[i] = arr2[i];
		arr1[i] = *(arr2 + i);
}
int main() {
	double a[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double b[5] = { 0 };
	int x;

	printf("arrA : ");
	for (x = 0; x < 5; x++)
		printf("%.1f  ", a[x]);
	puts("");

	arrCpy(b, a, 5); // 호출

	puts("복사");
	printf("arrB : ");
	for (x = 0; x < 5; x++)
		printf("%.1f  ", b[x]);
	puts("");
}
