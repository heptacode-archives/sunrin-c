#include<stdio.h>
void main(){
	int n100, n10, n1, n;
	scanf_s(" %d", &n);
	n100 = n / 100;
	n10 = n / 10 - n100 * 10;
	n1 = n - n100 * 100 - n10 * 10;
	printf("입력 : %d\n출력 : %d %d", n1 * 100 + n10 * 10 + n100, n + n1 * 100 + n10 * 10 + n100);
}