#include<stdio.h>
#include<string.h>
void main(){
	char str1[] = "aaa", str2[] = "bbb";
	int ptr = strcmp(str1, str2);
	if (ptr == 0)
		printf("%s(와)과 %s(은)는 같습니다!\n", str1, str2);
	else if (ptr > 0)
		printf("%s(이)가 %s보다 사전에서 뒤에 위치합니다!\n", str1, str2);
	else
		printf("%s(이)가 %s보다 사전에서 앞에 위치합니다!\n", str1, str2);
}