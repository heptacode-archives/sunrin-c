#include<stdio.h>
int recTriangle(char *star, int n){
	if (n == 0) return;
	if (n){
		recTriangle(star, n - 1);
		star[n - 1] = "*";
		puts(star);
	}
}
int main(){
	char star[10] = { 0 };
	recTriangle(star, 5);
	return 0;
}