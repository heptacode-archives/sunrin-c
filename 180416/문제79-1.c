#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main(){long int n;printf("양의 정수 입력 >> ");scanf(" %ld",&n);printf("결과: ");do{printf("%d",n%10);}while(n/=10);}