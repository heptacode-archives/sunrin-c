#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char name[3][20];
	int age[3];
	for (int i = 0; i < 3; i++){
		printf("%d번째 이름 입력: ", i + 1); scanf("%s", name[i]);
		printf("나이 입력:"); scanf("%d", &age[i]);
	}
	puts("== 결과출력 ==");
	for (int i = 0; i < 3; i++){
		printf("%d번째 이름: %s,나이:%d\n", i + 1, name[i], age[i]);
	}
	return 0;
}