#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){long int n;printf("���� ���� �Է� >> ");scanf(" %ld",&n);printf("���: ");do{printf("%d",n%10);}while(n/=10);}