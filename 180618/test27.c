#include<stdio.h>
#include<string.h>
void main(){
	char str[100], tmp[100];
	printf("���ڿ� �Է� > ");
	gets(str);
	int len = strlen(str) - 1, res = 1;
	for (int i = len / 2; i > 0; i--){
		res *= str[len - i] == str[i];
	}
	printf(res?"�յڷ� �о ������ ���ڿ��Դϴ�.\n":"�յڷ� �о ������ ���ڿ��� �ƴմϴ�.\n");
}