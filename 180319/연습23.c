#include<stdio.h>
#pragma warning(disable: 4996) // scanf ���� �˻� �ǳʶٱ�

void main(){
	int width, height;
	printf("����, ���� = ");
	scanf(" %d %d", &width, &height);
	printf("�ѷ� = %d\n", (width + height) * 2);
	printf("���� = %d\n", width * height);
}