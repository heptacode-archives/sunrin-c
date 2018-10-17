#include<stdio.h>
#define 자동출력 for (int i = 0; i < sizeof(a) / 4; i++) printf("%d ", a[i]);
void main(){
	/*int a[2][3] = { 1, 2, 3, 4, 5, 6 };
	printf("&a: %d\n", &a);
	printf("a + 1: %d\n", a + 1);
	printf("&a + 1: %d\n", &a + 1);
	printf("&a[0]: %d\n", &a[0]);
	printf("&a[0] + 1: %d\n", &a[0] + 1);*/

	int a[2][3] = { { 3, 2, 7 }, { 6, 9, 8 } };
	int a[][3] = { 3, 2, 7, 6, 9, 8 };
	자동출력
};
