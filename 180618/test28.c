#include<stdio.h>
#include<string.h>
void main(){
	char name[100], tel[100], addr[100], str[400] = { 0 };
	printf("�̸� �Է� > "); gets(name);
	printf("��ȭ��ȣ �Է� > "); gets(tel);
	printf("�ּ� �Է� > "); gets(addr);
	strcat(str, name);
	strcat(str, ", ");
	strcat(str, tel);
	strcat(str, ", ");
	strcat(str, addr);
	puts(str);
}