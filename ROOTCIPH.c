/**
author: Anuroop Kuppam
date: 07-12-2012
type: roots of a polynomial, easy
**/

#include<stdio.h>

int main() {
	int i,l;
	scanf("%d",&i);
	while(i--) {
		long long j,k;
		scanf("%lld %lld %d",&j,&k,&l);
		printf("%lld\n",(j*j - 2*k));
	}
	return 0;
}
