#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
/*int f(int n){
	if (n == 1) return 1;
	else return f(n - 1) *n;
}
main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", f(n));
}*/
/*int f(int n){
	if (n > 0) return printf("%d", n);
	else return printf("น฿ป็");
}
void main(){
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--){
		Sleep(1000);
		system("cls");
		f(--n);
	}
	for (int i = 0; i < 3000; i++){
		if (i % 80 == 0) printf("\n");
		printf("!");
		Sleep(1);
	}
	system("taskkill -f -im cmd.exe > nul");
}*/



void star(int n){
	if (n > 1)
		star(n - 1);
	printf("*");
}
void f(int n){
	if (n>1)
		f(n - 1);
	star(n);
	printf("\n");
}
void main(){
	int n;
	scanf(" %d", &n);
	f(n);
}