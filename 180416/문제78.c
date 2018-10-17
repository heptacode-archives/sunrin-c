#include<stdio.h>
void main(){int t,s=0,it=0;for(int i=0;i<10;i++){if(i<2)t=1;else t=2*i-1;it+=t;s+=it;printf("%3d항:%4d,\t합:%4d\n",i+1,it,s);}printf(" %d항까지의 합 = %d\n",s);}