#include<stdio.h>
#include<string.h>
void main(){
	char name[3][20] = { "Lee WL", "Kim suin", "Shim hw" }, i;
	for (i = 0; i < 3; i++){
		printf("%s\n", name[i]);
		printf("%d\n", strlen(name[i]));
	}
}