#include<stdio.h>
#include<string.h>
void main(){
	char str[100], tmp[100];
	printf("문자열 입력 > ");
	gets(str);
	int len = strlen(str) - 1, res = 1;
	for (int i = len / 2; i > 0; i--){
		res *= str[len - i] == str[i];
	}
	printf(res?"앞뒤로 읽어도 동일한 문자열입니다.\n":"앞뒤로 읽어도 동일한 문자열이 아닙니다.\n");
}