#include<stdio.h>
#pragma warning(disable: 4996) // scanf ���� �˻� �ǳʶٱ�

void main(){
	char name[40], gender;
	double kor, eng, math;
	printf("�̸� = ");
	scanf("%s", name);
	printf("���� = ");
	scanf(" %c", &gender);
	printf("����, ����, ���� = ");
	scanf(" %lf %lf %lf", &kor, &eng, &math);
	printf("���� = %.0lf\n", kor + eng + math);
	printf("��� = %.2lf\n", (kor + eng + math) / 3);
}