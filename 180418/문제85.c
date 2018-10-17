#include<stdio.h>
void main(){int a=63,b=39,x=a*b;while (a>0&&b>0){if (a>b)a-=b;else b-=a;}printf("result: %d\n",x/(a+b));}