#include<stdio.h>
void reversePrintArr(int arr[], int length){
	for (int i = length - 1; arr[i] && i >= 0; i--)
		printf("a[%d]=%d\n", i, arr[i]);
}
void main(){
	int a[5] = { 10, 20, 30, 40, 50 };
	reversePrintArr(a, 5);
}