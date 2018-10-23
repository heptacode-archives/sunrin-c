#include<stdio.h>
#include<string.h>
void main(){
	char dest[30], str1[] = "sunrin", str2[] = "internet";
	strcpy(dest, str1);
	strcat(dest, str2);
	printf("%s\n", dest);
}