#include<stdio.h>
#include<string.h>
void main(){
	char str1[] = "ABCDEF", str2[20];
	strcpy(str2, str1);
	printf("%s\n", str2);
}