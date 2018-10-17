#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int f(int a, int b){
	return (a > b) ? a : b;
}
void main(){
	int a, b;
	scanf(" %d %d", &a, &b);
	printf("%d\n", f(a, b));
}*/


/*int f(int a, int m){
	return (a > m) ? a : m;
}
void main(){
	int m = 0, a[10];
	for (int i = 0; i < 10; i++){
		scanf(" %d", &a[i]);
		m = f(a[i], m);
	}
	printf("MAX: %d\n", m);
}*/

/*void f(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
void main(){
	int a, b;
	scanf(" %d %d", &a, &b);
	f(&a, &b);
	printf("%d %d", a, b);
}*/

/*void f(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
void main(){
	int a[5] = { 66, 84, 79, 93, 48 };
	for (int i = 0; i < 5; i++)
		for (int j = i + 1; j < 5; j++)
			if (a[i] > a[j])
				f(&a[i], &a[j]);
	for (int i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
}*/