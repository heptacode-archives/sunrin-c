#include<stdio.h>
void main(){
	int a, b, c;
	scanf_s(" %d %d %d", &a, &b, &c);
	((a <= 170) && (b <= 170) && (c <= 170)) ? printf("%s\n", "CRASH") : printf("%s\n", "PASS");
}