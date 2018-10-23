#include<stdio.h>
int recStar(int n){
	printf("*");
	if(n > 1) return recStar(n - 1);
	return 1;
}
int main(){
	recStar(5);
	return 0;
}