#include<stdio.h>
void main(){int n,s=0;scanf(" %d",&n);while(n!=0){s+=n%10;n/=10;}if(s%5==2)printf("GOOD\n");else printf("BAD\n");}