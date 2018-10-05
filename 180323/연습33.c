#include<stdio.h>
void main(){
	int a, b, c;
	scanf_s(" %d %d %d", &a, &b, &c);
	printf("Ãâ·Â : %d", (a >= b && b >= c || c >= b && b >= a) ? b : (b >= c && c >= a || c >= b && b >= a) ? c : a);
}