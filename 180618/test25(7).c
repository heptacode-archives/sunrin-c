#include<stdio.h>
#include<string.h>
void main(){
	char str1[] = "aaa", str2[] = "bbb";
	int ptr = strcmp(str1, str2);
	if (ptr == 0)
		printf("%s(��)�� %s(��)�� �����ϴ�!\n", str1, str2);
	else if (ptr > 0)
		printf("%s(��)�� %s���� �������� �ڿ� ��ġ�մϴ�!\n", str1, str2);
	else
		printf("%s(��)�� %s���� �������� �տ� ��ġ�մϴ�!\n", str1, str2);
}