int a[] = { 1, 2, 3, 4, 5 };
int *pa;
int i;
pa = a;
for (i = 0; i<sizeof(a) / sizeof(a[0]); i++)
	printf("%d\t", a[i]);
#include<stdio.h>
int minof(int x, int y) {
	//
}
int main() {
	int a, b, res;
	printf("����1: ");
	scanf("%d", &a);
	printf("����2: ");
	scanf("%d", &b);
	res = minof(a, b);
	printf("���� ����: %d\n", res);
}
