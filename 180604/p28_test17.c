#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	char a[100];
	int cnt = 0;
	gets(a);
	for (int i = 0; i < 100 && a[i] != NULL; i++) cnt++;
	for (int i = cnt; i >= 0; i--){
		if (a[i] == NULL) continue;
		else printf("%c", a[i]);
	}
}
