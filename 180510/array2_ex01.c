#include<stdio.h>
void main(){
	int s = 0, a[3][3];
	for (int i = 0; i < 3; i++){
		printf("%d�� �л� ���� �Է� : ",i + 1);
		for (int j = 0; j < 3; j++)
			scanf_s(" %d", &a[i][j]);
	}
	printf("�������� �л� ���� ��� ��������\n ��ȣ ���� ���� ���� ����\n");
	for (int i = 0; i < 3; i++){
		printf("%5d", i + 1);
		for (int j = 0; j < 3; j++)
			printf("%5d", a[i][j]);
		for (int j = 0; j < 3; j++)
			s += a[i][j];
		printf("%5d", s);
		s = 0;
		printf("\n");
	}
}