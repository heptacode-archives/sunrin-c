#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	char a[100];
	int cntc = 0, cntcc = 0;
	printf("��ȣ �Է� > ");
	gets(a);
	for (int i = 0; i <= 100 && (a[i] == 'c' || a[i] == 'C'); i++) cntc++;
	printf("c/C�� ���� : %d\n", cntc);
	for (int i = 0; i <= 100 && ((a[i] == 'c' && a[i + 1] == 'c') || (a[i] == 'c' && a[i + 1] == 'C') || (a[i] == 'C' && a[i + 1] == 'c') || (a[i] == 'C' && a[i + 1] == 'C')); i++) cntcc++;
	printf("cc/CC�� ���� : %d\n", cntcc);
}