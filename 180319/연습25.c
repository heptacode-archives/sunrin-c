#include<stdio.h>
#pragma warning(disable: 4996) // scanf 보안 검색 건너뛰기

void main(){
	char name[40], dep[40];
	int pay;
	printf("이름 ? ");
	gets(name);
	printf("소속 ? ");
	gets(dep);
	printf("용돈 ? ");
	scanf(" %d", &pay);
	printf("%s은(는) %s 학생이며, 한달 용돈은 %d원이다.\n", name, dep, pay);
}