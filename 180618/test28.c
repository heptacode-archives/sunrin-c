#include<stdio.h>
#include<string.h>
void main(){
	char name[100], tel[100], addr[100], str[400] = { 0 };
	printf("이름 입력 > "); gets(name);
	printf("전화번호 입력 > "); gets(tel);
	printf("주소 입력 > "); gets(addr);
	strcat(str, name);
	strcat(str, ", ");
	strcat(str, tel);
	strcat(str, ", ");
	strcat(str, addr);
	puts(str);
}