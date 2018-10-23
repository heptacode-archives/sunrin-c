#include<stdio.h>
void shiftLeft(int *arr, int length) {
	int tmp = 0;
	tmp = arr[0];
	for (int i = 0; i < length; i++){
		arr[i] = arr[i + 1];
		arr[length - i] = arr[i];
	}
}
int main(){
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x;
	for (x = 0; x < 10; x++)
		printf("%d ", a[x]);
	puts("");

	shiftLeft(a, 10);
	puts("shiftLeft() 1회 호출 후");
	for (x = 0; x < 10; x++)
		printf("%d ", a[x]);
	puts("");

	shiftLeft(a, 10);
	puts("shiftLeft() 2회 호출 후");
	for (x = 0; x < 10; x++)
		printf("%d ", a[x]);
	puts("");
}
