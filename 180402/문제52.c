#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��� ���
void main(){
	int i, n;
	int prime = 1;
	scanf(" %d", &n);
	for (i = 2; i <= n - 1; i++){
		if (n % i == 0)
			prime = 0;
		if (prime)
			printf("%d(��)�� �Ҽ��Դϴ�.", n);
		else
			printf("%d(��)�� �Ҽ��� �ƴմϴ�.", n);
	}
}

/* ���ڴ��� �ڵ�
void main(){
	int n = 0;
	scanf(" %d", &n);
	if (isprime(n) == 1)
		printf("%d(��)�� �Ҽ��Դϴ�.", n);
	else
		printf("%d(��)�� �Ҽ��� �ƴմϴ�.", n);
}
int isprime(int n){
	if (n == 2) return 1;
	if ((n & 1) == 0) return 0; // n % 2 == 0
	for (int k = 3; k < sqrt(n) + 1; k += 2){
		if (n % k == 0) return 0;
	}
	return 1;
}
*/