#include<stdio.h>
#include<limits.h>
int minOfArr(const int arr[], int length) {
	int m = INT_MAX;
	for (int i = 0; arr[i] && i < length; i++)
		if (arr[i] < m) m = arr[i];
	return m;
}
int main() {
	int a[7] = { 33, 67, 23, 87, 95, 47, 75 };
	int res;
	res = minOfArr(a, 7);
	printf("min = %d\n", res);
}