#include<stdio.h>
void recFunc(int n){
	if (n == 0) return;
	printf("%d ", n);
	recFunc(n - 1);
}
int main(){
	recFunc(9);
}