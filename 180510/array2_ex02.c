#include<stdio.h>
void main(){
	int a[5][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9 }, { 10, 11, 12 }, { 13, 14 }, { 15 } };
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (a[i][j] != 0) printf("%4d", a[i][j]);
			if (j >= 4) printf("\n");
		}
	}
}