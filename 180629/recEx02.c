#include<stdio.h>
int recMul(int n){
	int s = 1;
	for (int i = 1; i <= n; i++)
		s *= i;
	return s;
}
int main(){
	printf("°á°ú: %d\n", recMul(10));
	return 0;
}