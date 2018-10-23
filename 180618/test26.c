#include<stdio.h>
#include<string.h>
void main(){
	char str1[100], str2[100], tmp[100];
	printf("문자열1 입력 > ");
	gets(str1);
	printf("문자열2 입력 > ");
	gets(str2);
	strcpy(tmp, str1);
	strcpy(str1, str2);
	strcpy(str2, tmp);
	puts("========== 교환 후 문자열 출력 ==========");
	printf("문자열2 출력 > %s\n", str1);
	printf("문자열1 출력 > %s\n", str2);
}