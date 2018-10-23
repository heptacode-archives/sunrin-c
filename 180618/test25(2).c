#include<stdio.h>
void main(){
	char data[3][10] = { "ABCDE", "FGH", "IJKL" }, i;
	for (i = 0; i < 3; i++){
		printf("%s\n", data[i]);
	}
}