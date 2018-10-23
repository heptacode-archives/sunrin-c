#include<stdio.h>
void printArray(int *arr, int length);
int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, len);
}
void printArray(int *arr, int length) {
	for (int i = 0; arr[i] && i < length; i++) printf("a[%d]=%d\n", i, arr[i]);
}