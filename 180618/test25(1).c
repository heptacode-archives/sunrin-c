#include<stdio.h>
void main(){
	char str[] = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++){
		printf("%s\n", &str[i]);
	}
}