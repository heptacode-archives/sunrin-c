#include<stdio.h>
#include<string.h>
void main(){
	char str1[] = "ABCDEFGH", str2[20];
	strcpy(str2, &str1[3]);
	printf("%s\n", str2);
}