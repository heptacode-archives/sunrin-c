#include<stdio.h>
void main(){int a=1,s=0,i=0;while(a!=0){i++;printf("�������� >> ");scanf_s(" %d",&a);s+=a;}printf("����: %d\t���: %.1f\n\n",s,(float)(s/i));}