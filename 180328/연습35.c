#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define �������� int kor, eng, math;
#define �����Է¸޽������ printf("���� ���� ���� ���� ? ");
#define ������ĵ scanf(" %d %d %d", &kor, &eng, &math);
#define ������� printf("���� = %d\n", kor + eng + math);
#define ������ printf("��� = %.2f\n", (float)(kor + eng + math) / 3);
#define ������� printf("����� ������ "); if ((float)(kor + eng + math) / 3 >= 90) printf("��"); else if ((float)(kor + eng + math) / 3 >= 80) printf("��"); else if ((float)(kor + eng + math) / 3 >= 70) printf("��"); else if ((float)(kor + eng + math) / 3 >= 60) printf("��"); else printf("��"); printf(" �Դϴ�.");
void main(){
	��������
	�����Է¸޽������
	������ĵ
	�������
	������
	�������
}