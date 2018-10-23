#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	char s[11];
	int num= 0;
	printf("용의자의 DNA 정보 입력 : ");
	gets(s);
	for (int i = 0; s[i]; i++)
		num += (s[i] - '0');
	if (num % 7 == 4) printf("범인\n");
	else printf("일반인\n");
	return 0;
}
