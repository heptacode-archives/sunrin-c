#include<stdio.h>
void main(){
	int a[] = { 1, 2, 3, 4, 5 }, *pa, i;
	pa = a;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		printf("%d\t", *(pa + 1));
}