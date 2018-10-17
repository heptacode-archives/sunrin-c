#include<stdio.h>
void main(){
	/*double num[3][2] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	printf("num배열의 크기 : %dbyte\n", sizeof(num));
	printf("num배열의 원소 갯수 : %d\n", sizeof(num) / sizeof(double));
	printf("num배열의 1행의 원소갯수 : %d\n", sizeof(num[0]) / sizeof(double));*/

	/*int num[2][2] = { 10, 20, 30, 40 }, i, j; for (i = 0; i<2; i++){
		for (j = 0; j<2; j++){
			printf("num[%d][%d] %d의 메모리주소 : %d\n", i, j, num[i][j], &num[i][j]);
		}
	}*/

	/*int a[2][3], b[2][3], c[2][3];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++)
			scanf_s(" %d", &a[i][j]);
	}
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++)
			scanf_s(" %d", &b[i][j]);
	}
	for (int i = 0; i < sizeof(a); i++){
		for (int j = 0; j < sizeof(a); j++)
			c[i][j] = a[i][j];
			c[
	}*/

	/*int a[2][3] = { { 3, 5, 8 }, { 2, 7, 6 } };
	int b[2][3] = { { 6, 8, 12 }, { 5, 1, 9 } };
	int c[2][3];
	int x, y;
	for (x = 0; x < 2; x++){
		for (y = 0; y < 3; y++){
			c[x][y] = a[x][y] + b[x][y];
			printf("%3d", c[x][y]);
		}
		puts("");
	}*/

	/*int num[2][3] = { { 10, 20, 30 }, { 40, 50, 60 } }, i, j; for (i = 0; i<2; i++){
		for (j = 0; j<3; j++){ printf("%3d", num[i][j]); } printf("\n");
	}*/	/*int num[2][3] = { { 10, 20, 30 }, { 40, 50, 60 } }, i, j; for (i = 0; i<3; i++){
		for (j = 0; j<2; j++){ printf("%3d", num[j][i]); } printf("\n");
	}*/	//int num[3][3]={ {10, 20, 30}, {40, 50, 60}, {70, 80, 90} }, i, j; for(i=0 ; i<3 ; i++){ for(j=0 ; j<3 ; j++){ if(i==j) printf("%d\n", num[i][j]) ; } }	//int num[3][3] = { 3, 2, 8, 5, 3, 6, 9, 8, 3 }, i, j; int data = 8, count = 0; for (i = 0; i<3; i++){ for (j = 0; j<3; j++){ if (num[i][j] == data) count++; } } printf("count=%d\n", count);

	/*int i, j;
	int num[4][2] = { 3, 2, 8, 5, 3, 6, 9, 8 };
	int data[4][2] = { 0 };
	for (i = 0; i<4; i++){
		for (j = 0; j<2; j++){
			data[i][j] = num[i][j] % 2;
		}
	}
	for (i = 0; i<4; i++){
		for (j = 0; j<2; j++){
			printf("%3d", data[i][j]);
		}
		printf("\n");
	}*/

	/*int num[2][2] = { { 1, 2 }, { 3, 4 } }, i, j; int sum = 0; for (i = 0; i<2; i++){ sum = 0; for (j = 0; j<2; j++){ sum += num[i][j]; } printf("%d행의 합=%d\n", i, sum); }*/	/*int i, j;	int num[2][3] = { { 1, 2 }, { 3, 4 } };	int sum = 0;	for (i = 0; i<2; i++){		sum = 0;		for (j = 0; j<2; j++){			sum += num[i][j];		}		num[i][j] = sum;	}	for (i = 0; i<2; i++){		for (j = 0; j<3; j++){			printf("%3d", num[i][j]);		}		printf("\n");	}*/	/*int num[3][3] = { 0 }, i, j, n = 1;	for (i = 0; i<3; i++){		for (j = 0; j<3; j++){			num[i][j] = n++;		}	}	for (i = 0; i<3; i++){		for (j = 0; j<3; j++){			printf("%3d", num[i][j]);		}		printf("\n");	}*/	/*int num[3][3] = { 0 }, i, j, n = 1;	for (i = 0; i<3; i++){		for (j = 0; j<3; j++){			num[i][j] = i * 3 + j + 1;		}	}	for (i = 0; i<3; i++){		for (j = 0; j<3; j++){			printf("%3d", num[i][j]);		}		printf("\n");	}*/}
