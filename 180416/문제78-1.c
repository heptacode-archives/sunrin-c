#include<stdio.h>
void main(){int i,s1=1,s2=1;for(i=0;i<10;i++){printf("%3d��:%4d,\t��:%4d\n",i+1,s1,s2);s1+=(i+1)*2;s2+=s1;}printf(" %d�ױ����� �� = %d\n",i,s2-s1);}