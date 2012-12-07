/**
author: Anuroop Kuppam
date: 07-12-2012
type: ad-hoc
hint: relative speed
**/

#include<stdio.h>

int gcd(int a,int b) {
	if(b == 0) return a;
	else return gcd(b,a%b);
}

int abs(int a) {
	return a<0 ? -1*a : a;
}

int main() {
	int i,j,k,l;
	scanf("%d",&i);
	while(i--) {
		scanf("%d %d",&j,&k);
		l = gcd(abs(j),abs(k));
		j = j/l;
		k = k/l;
		if(j>k) printf("%d\n",j-k);
		else printf("%d\n",k-j);
	}
	return 0;
}
