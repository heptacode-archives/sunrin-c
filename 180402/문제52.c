#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 모범 답안
void main(){
	int i, n;
	int prime = 1;
	scanf(" %d", &n);
	for (i = 2; i <= n - 1; i++){
		if (n % i == 0)
			prime = 0;
		if (prime)
			printf("%d(은)는 소수입니다.", n);
		else
			printf("%d(은)는 소수가 아닙니다.", n);
	}
}

/* 갓코더의 코드
void main(){
	int n = 0;
	scanf(" %d", &n);
	if (isprime(n) == 1)
		printf("%d(은)는 소수입니다.", n);
	else
		printf("%d(은)는 소수가 아닙니다.", n);
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